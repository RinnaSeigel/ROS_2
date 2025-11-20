<<<<<<< HEAD
cmake_minimum_required(VERSION 3.5)

project(robot_description)

find_package(ament_cmake REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

install(
  DIRECTORY
    urdf
  DESTINATION
    share/${PROJECT_NAME}/
)

ament_package()
=======
cmake_minimum_required(VERSION 3.5)

project(robot_description)

find_package(ament_cmake REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

install(
  DIRECTORY
    urdf
  DESTINATION
    share/${PROJECT_NAME}/
)

ament_package()
>>>>>>> bd4c0ba3eb9e4ac6d61d97f6e7d48e236b18773d
