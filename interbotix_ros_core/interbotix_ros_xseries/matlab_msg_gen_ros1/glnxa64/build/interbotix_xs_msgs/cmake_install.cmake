# Install script for directory: /home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/src/interbotix_xs_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/interbotix_xs_msgs/msg" TYPE FILE FILES
    "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/src/interbotix_xs_msgs/msg/ArmJoy.msg"
    "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/src/interbotix_xs_msgs/msg/HexJoy.msg"
    "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/src/interbotix_xs_msgs/msg/JointGroupCommand.msg"
    "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/src/interbotix_xs_msgs/msg/JointSingleCommand.msg"
    "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/src/interbotix_xs_msgs/msg/JointTemps.msg"
    "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/src/interbotix_xs_msgs/msg/JointTrajectoryCommand.msg"
    "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/src/interbotix_xs_msgs/msg/LocobotJoy.msg"
    "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/src/interbotix_xs_msgs/msg/TurretJoy.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/interbotix_xs_msgs/srv" TYPE FILE FILES
    "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/src/interbotix_xs_msgs/srv/MotorGains.srv"
    "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/src/interbotix_xs_msgs/srv/OperatingModes.srv"
    "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/src/interbotix_xs_msgs/srv/Reboot.srv"
    "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/src/interbotix_xs_msgs/srv/RegisterValues.srv"
    "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/src/interbotix_xs_msgs/srv/RobotInfo.srv"
    "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/src/interbotix_xs_msgs/srv/TorqueEnable.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/interbotix_xs_msgs/cmake" TYPE FILE FILES "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/build/interbotix_xs_msgs/catkin_generated/installspace/interbotix_xs_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/devel/include/interbotix_xs_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/home/user/.matlab/R2023a/ros1/glnxa64/venv/bin/python3" -m compileall "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/devel/lib/python3/dist-packages/interbotix_xs_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/devel/lib/python3/dist-packages/interbotix_xs_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/build/interbotix_xs_msgs/catkin_generated/installspace/interbotix_xs_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/interbotix_xs_msgs/cmake" TYPE FILE FILES "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/build/interbotix_xs_msgs/catkin_generated/installspace/interbotix_xs_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/interbotix_xs_msgs/cmake" TYPE FILE FILES
    "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/build/interbotix_xs_msgs/catkin_generated/installspace/interbotix_xs_msgsConfig.cmake"
    "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/build/interbotix_xs_msgs/catkin_generated/installspace/interbotix_xs_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/interbotix_xs_msgs" TYPE FILE FILES "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/src/interbotix_xs_msgs/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/src/interbotix_xs_msgs/include/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/devel/lib/libinterbotix_xs_msgs_matlab.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libinterbotix_xs_msgs_matlab.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libinterbotix_xs_msgs_matlab.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libinterbotix_xs_msgs_matlab.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/m/" TYPE DIRECTORY FILES "/home/user/interbotix_ws/src/interbotix_ros_core/interbotix_ros_xseries/matlab_msg_gen_ros1/glnxa64/src/interbotix_xs_msgs/m/" FILES_MATCHING REGEX "/[^/]*\\.m$")
endif()

