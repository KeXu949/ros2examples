import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ke/ANU/Algo Trading/ros2Exercise/install/village_li'
