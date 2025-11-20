#include "rclcpp/rclcpp.hpp"
#include "full_name_package/srv/summ_full_name.hpp"


int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  if (argc != 4) {
    std::cerr << "Usage: client_name <last_name> <first_name> <middle_name>" << std::endl;
    return 1;
  }

  auto node = rclcpp::Node::make_shared("client_name");
  auto client = node->create_client<full_name_package::srv::SummFullName>("SummFullName");

  while (!client->wait_for_service(std::chrono::seconds(1))) {
    RCLCPP_INFO(node->get_logger(), "Waiting for service...");
  }

  auto request = std::make_shared<full_name_package::srv::SummFullName::Request>();
  request->last_name = argv[1];
  request->first_name = argv[2];
  request->middle_name = argv[3];

  auto result = client->async_send_request(request);
  if (rclcpp::spin_until_future_complete(node, result) ==
      rclcpp::FutureReturnCode::SUCCESS)
  {
    std::cout << "Результат: " << result.get()->full_name << std::endl;
  } else {
    RCLCPP_ERROR(node->get_logger(), "Failed to call service SummFullName");
  }
  rclcpp::shutdown();
  return 0;
}

