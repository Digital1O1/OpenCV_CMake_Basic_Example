cmake_minimum_required(VERSION 3.0.0)
project(OpenCV_Hello_World VERSION 0.1.0 LANGUAGES C CXX)

# -------------------------- [ SET OPENCV DIRECTORY PATH TO POINT TOWARDS OpenCVConfig.cmake FILE ] -------------------------- #

# Windows OpenCV Directory path | Comment out if using RPI or Jetson Nano
set(OpenCV_DIR "E:/Coding Folder/OpenCV Source Folder/build/install/x64/vc16/lib")
set(CMAKE_PREFIX_PATH "E:/Coding Folder/OpenCV Source Folder/build/win-install/x64/vc16")
# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)

message(STATUS "                                                                         ")
message(STATUS "-------------------------------------------------------------------------")
message(STATUS "    ******** OpenCV library status ********")
message(STATUS "    config directory OpenCV_DIR          : ${OpenCV_DIR}")
message(STATUS "    OpenCV_VERSION                       : ${OpenCV_VERSION}")
message(STATUS "    OpenCV_LIBS                          : ${OpenCV_LIBS}")
message(STATUS "    OpenCV_INCLUDE_DIRS include path     : ${OpenCV_INCLUDE_DIRS}")
message(STATUS "-------------------------------------------------------------------------")
message(STATUS "                                                                         ")

# Find OpenCV package
find_package(OpenCV REQUIRED)
include(CTest)

# Include OpenCV headers
include_directories(${OpenCV_INCLUDE_DIRS})

# Create the executable
add_executable(OpenCV_Hello_World main.cpp)

# Link OpenCV libraries
target_link_libraries(OpenCV_Hello_World PRIVATE ${OpenCV_LIBS})
