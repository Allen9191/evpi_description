import os
import yaml

import ament_index_python.packages
import launch
import launch_ros.actions


def generate_launch_description():
    driver_share_dir = ament_index_python.packages.get_package_share_directory('evpi_bringup')
    driver_params_file = os.path.join(driver_share_dir, 'config', 'VLP16-velodyne_driver.yaml')
    front_velodyne_drive_node = launch_ros.actions.Node(package='velodyne_driver',
                                                   executable='velodyne_driver_node',
                                                   namespace='front_velodyne',
                                                   name='driver_node',
                                                   output='both',
                                                   parameters=[driver_params_file])
    top_velodyne_drive_node = launch_ros.actions.Node(package='velodyne_driver',
                                                   executable='velodyne_driver_node',
                                                   namespace='top_velodyne',
                                                   name='driver_node',
                                                   output='both',
                                                   parameters=[driver_params_file])

    convert_share_dir = ament_index_python.packages.get_package_share_directory('velodyne_pointcloud')
    convert_params_file = os.path.join(convert_share_dir, 'config', 'VLP16-velodyne_convert_node-params.yaml')
    with open(convert_params_file, 'r') as f:
        convert_params = yaml.safe_load(f)['velodyne_convert_node']['ros__parameters']
    convert_params['calibration'] = os.path.join(convert_share_dir, 'params', 'VLP16db.yaml')
    front_velodyne_convert_node = launch_ros.actions.Node(package='velodyne_pointcloud',
                                                    executable='velodyne_convert_node',
                                                    namespace='front_velodyne',
                                                    name='convert_node',
                                                    output='both',
                                                    parameters=[convert_params])
    top_velodyne_convert_node = launch_ros.actions.Node(package='velodyne_pointcloud',
                                                    executable='velodyne_convert_node',
                                                    namespace='top_velodyne',
                                                    name='convert_node',
                                                    output='both',
                                                    parameters=[convert_params])

    laserscan_share_dir = ament_index_python.packages.get_package_share_directory('velodyne_laserscan')
    laserscan_params_file = os.path.join(laserscan_share_dir, 'config', 'default-velodyne_laserscan_node-params.yaml')
    front_velodyne_laserscan_node = launch_ros.actions.Node(package='velodyne_laserscan',
                                                      executable='velodyne_laserscan_node',
                                                      namespace='front_velodyne',
                                                      name='laserscan_node',
                                                      output='both',
                                                      parameters=[laserscan_params_file])
    top_velodyne_laserscan_node = launch_ros.actions.Node(package='velodyne_laserscan',
                                                      executable='velodyne_laserscan_node',
                                                      namespace='top_velodyne',
                                                      name='laserscan_node',
                                                      output='both',
                                                      parameters=[laserscan_params_file])

    return launch.LaunchDescription([front_velodyne_drive_node,
                                     front_velodyne_convert_node,
                                     front_velodyne_laserscan_node,
                                     top_velodyne_drive_node,
                                     top_velodyne_convert_node,
                                     top_velodyne_laserscan_node, 

                                     launch.actions.RegisterEventHandler(
                                         event_handler=launch.event_handlers.OnProcessExit(
                                             target_action=front_velodyne_drive_node,
                                             on_exit=[launch.actions.EmitEvent(
                                                 event=launch.events.Shutdown())],
                                         )),
                                     launch.actions.RegisterEventHandler(
                                         event_handler=launch.event_handlers.OnProcessExit(
                                             target_action=top_velodyne_drive_node,
                                             on_exit=[launch.actions.EmitEvent(
                                                 event=launch.events.Shutdown())],
                                         )),
                                     ])