from setuptools import find_packages, setup

package_name = 'village_li'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ke',
    maintainer_email='u7520531@anu.edu.au',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "li4_node=village_li.li4:main", #tell ros2 to run the main function in li4.py
                                            # ros2 run village_li li4_node
            "li3_node=village_li.li3:main", #tell ros2 to run the main function in li3.py
                                                    # ros2 run village_li free_viewer_node
        ],
    },
)
