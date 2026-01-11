#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from service_full_name.srv import SummFullName

class ServiceName(Node):

    def __init__(self):
        super().__init__('service_name') # инициализирует узел с именем 'service_name'
        self.srv = self.create_service(SummFullName, 'SummFullName', self.handle_summ_full_name) #  создаёт сервис с именем 'SummFullName', типом SummFullName и callback-функцией handle_summ_full_name

    def handle_summ_full_name(self, request, response): #  функция, вызываемая при каждом запросе к сервису
        full_name = f"{request.last_name} {request.name} {request.first_name}" # формирует полное имя из полей запроса.
        self.get_logger().info(f"Received: {request.last_name}, {request.name}, {request.first_name}")
        response.full_name = full_name # заполняет поле ответа полным именем
        self.get_logger().info(f"Sending back: {full_name}")
        return response # возвращает заполненный объект ответа клиенту


def main(args=None):
    rclpy.init(args=args)
    service = ServiceName()
    rclpy.spin(service)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
