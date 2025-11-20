import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/rinna/ROS_2/ROSM2/ex10/install/text_to_cmd_vel'
