#!/usr/bin/python3

from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='turtle1',
            output='screen'
        ),
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='turtle2',
            output='screen'
        ),
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='turtle3',
            output='screen'
        ),
        Node(
            package='turtlesim',
            executable='mimic',
            name='mimic2',
            output='screen',
            parameters=[
                {'source': '/turtle1'}, {'target': '/turtle2'}
            ]
        ),
        Node(
            package='turtlesim',
            executable='mimic',
            name='mimic3',
            output='screen',
            parameters=[
                {'source': '/turtle2'}, {'target': '/turtle3'}
            ]
        ),
    ])
