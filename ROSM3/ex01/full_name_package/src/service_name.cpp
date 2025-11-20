#include "rclcpp/rclcpp.hpp"
#include "full_name_package/srv/summ_full_name.hpp"

using namespace std::placeholders;

class ServiceNode : public rclcpp::Node
{
public:
  ServiceNode() : Node("service_name")
  {
    service_ = this->create_service<full_name_package::srv::SummFullName>(
      "SummFullName",
      std::bind(&ServiceNode::handle_service, this, _1, _2)
    );
    // Вставить сюда:
    RCLCPP_INFO(this->get_logger(), "Service SummFullName is ready!");
  }

  void handle_service(
    const std::shared_ptr<full_name_package::srv::SummFullName::Request> request,
    std::shared_ptr<full_name_package::srv::SummFullName::Response> response)
  {
    // Вставить сюда:
    RCLCPP_INFO(this->get_logger(), "Incoming request: %s %s %s",
      request->last_name.c_str(),
      request->first_name.c_str(),
      request->middle_name.c_str()
    );
    response->full_name = request->last_name + " " +
                          request->first_name + " " +
                          request->middle_name;
  }

private:
  rclcpp::Service<full_name_package::srv::SummFullName>::SharedPtr service_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ServiceNode>());
  rclcpp::shutdown();
  return 0;
}
