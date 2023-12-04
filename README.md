# Lab 5 Package Instructions

Setup Ariac Simulation Environment:
//mkdir -p ~/ariac_ws/src
//cd ~/ariac_ws/src
//git clone https://github.com/cwru-eecs-373/cwru_ariac_2019.git
//rosdep install --from-paths ariac --ignore -src -r -y
//cd ../
//sudo -- /bin/bash -c "source /opt/ros/noetic/setup.bash; catkin_make -DCMAKE_INSTALL_PREFIX=/opt/ros/noetic install"

Setup separate Ariac workspace
//mkdir -p ~/ecse_373_ariac_ws/src
//cd ~/ecse_373_ariac_ws/src
//git clone https://github.com/cwru-eecs-373/ecse_373_ariac.git
//rosdep install --from-paths ecse_373_ariac --ignore-src -r -y
//cd ../
//catkin_make
//source devel/setup.bash

Launch
