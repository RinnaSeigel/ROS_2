#!/usr/bin/env python3

import sys
import rclpy
from rclpy.node import Node
from service_full_name.srv import SummFullName

class ClientName(Node):

    def __init__(self):
        super().__init__('client_name') # вызывает конструктор родителя, задавая имя узла 'client_name'
        self.cli = self.create_client(SummFullName, 'SummFullName') # создаёт клиент для сервиса SummFullName.
        while not self.cli.wait_for_service(timeout_sec=1.0): # цикл ожидания
            self.get_logger().info('Сервис еще не доступен, ожидаем...')
        self.req = SummFullName.Request() # создаёт пустой запрос сервиса

    def send_request(self, last_name, name, first_name):
        self.req.last_name = last_name # присваивает фамилию
        self.req.name = name # имя
        self.req.first_name = first_name # отчество 
        self.future = self.cli.call_async(self.req) # вызывает сервис 

def main(args=None): 
    rclpy.init(args=args)  #  инициализирует ROS2 с аргументами

    client = ClientName() # создаёт экземпляр клиента

    if len(sys.argv) != 4:  
        client.get_logger().info('Пожалуйста, укажите 3 аргумента: фамилия имя отчество')
        sys.exit(1)

    client.send_request(sys.argv[1], sys.argv[2], sys.argv[3]) # отправляет запрос с аргументами

    while rclpy.ok(): # основной цикл ROS2 пока всё в порядке
        rclpy.spin_once(client)  # обрабатывает один цикл событий для узла
        if client.future.done():
            try:
                response = client.future.result() #  получает результат
            except Exception as e:
                client.get_logger().error(f'Ошибка вызова сервиса: {e}') # логи 
            else:
                client.get_logger().info(f'Полное имя: {response.full_name}') # выводит полное имя из ответа
            break
    # завершение 
    client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
