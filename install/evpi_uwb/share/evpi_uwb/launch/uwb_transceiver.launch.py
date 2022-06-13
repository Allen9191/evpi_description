import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():

    params_dir = LaunchConfiguration(
        'params_dir',
        default=os.path.join(
            get_package_share_directory('evpi_uwb'),
            'config','uwb' + '.yaml'))

    return LaunchDescription([

        DeclareLaunchArgument(
            'params_dir',
            default_value=params_dir,
            description='Full path to uwb parameter file to load'),

        Node(
            package='evpi_uwb',
            executable='following_node',
            parameters=[params_dir],
            output='screen'),
    ])