cmake_minimum_required(VERSION 3.10)
project(DisplayImage)

# Set OpenCV directory
# Should point towards directory that has OpenCVConfig.cmake

# Points towards OpenCVConfig.cmake
set(OpenCV_DIR "E:/Coding Folder/OpenCV Folder/build/install/x64/vc16/lib")  # Specify the path to the OpenCVConfig.cmake file
# Points towards librareis
set(OpenCV_INCLUDE_DIRS "E:/Coding Folder/OpenCV Folder/build/install/include/opencv2")
# Sets OpenCV version to 4.7
set(OpenCV_VERSION "4.7")
#set(OpenCV_LIBS "E:/Coding Folder/OpenCV Folder/build/install/x64/vc16/lib")

message(STATUS "                                                                         ")
message(STATUS "-------------------------------------------------------------------------")
message(STATUS "    ******** OpenCV library status ********")
message(STATUS "    config directory : ${OpenCV_DIR}")
message(STATUS "    version          : ${OpenCV_VERSION}")
message(STATUS "    libraries        : ${OpenCV_LIBS}")
message(STATUS "    include path     : ${OpenCV_INCLUDE_DIRS}")
message(STATUS "-------------------------------------------------------------------------")
message(STATUS "                                                                         ")

# Find OpenCV
find_package(OpenCV 4.7 REQUIRED)
#find_package(OpenCV 4.7 REQUIRED COMPONENTS core imgproc highgui)

# Set C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add executable
add_executable(DisplayImage DisplayImage.cpp)

# Include OpenCV headers
include_directories(${OpenCV_INCLUDE_DIRS})

# Link OpenCV libraries
target_link_libraries(DisplayImage PRIVATE ${OpenCV_LIBS})