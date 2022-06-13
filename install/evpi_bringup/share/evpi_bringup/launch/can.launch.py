import os

from ament_index_python.packages import get_package_share_directory

import launch
import launch_ros.actions

def generate_launch_description():

    return launch.LaunchDescription([

        launch_ros.actions.Node(
            package='kvaser_interface', executable='kvaser_can_bridge', name='can_peripheral',
            parameters=[{
                'hardware_id': 74771,
            }]
        ),
        launch_ros.actions.Node(
            package='kvaser_interface', executable='kvaser_can_bridge', name='can_drive',
            parameters=[{
                'hardware_id': 74778,
            }]
        ),
    ])