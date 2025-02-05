#include "power_subscriber.hpp"

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ros2_mock::PowerSubscriber>());
  rclcpp::shutdown();
  return 0;
}
