import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/rinna/ROS_2/ROSM3/ex01/ros2_ws/install/py_srvcli'
