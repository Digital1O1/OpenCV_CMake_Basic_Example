#include <opencv2/opencv.hpp> // Include the main OpenCV header
#
int main()
{
    // Read an image using the imread function with the IMREAD_COLOR flag
    // Linux path
    // cv::Mat image = cv::imread("E:/Coding Folder/CMake Personal Projects/OpenCV_CMake_Basic/Cat_Meme_.jpeg", cv::IMREAD_COLOR);

    // Windows path
    cv::Mat image = cv::imread("E:/Coding Folder/C++/OpenCV Projects/OpenCV Hello World CMake/Cat_Meme_.jpeg", cv::IMREAD_COLOR);
    // /home/pi/Desktop/Coding_folder/OpenCV_Cmake_Basic_Example
    if (image.empty())
    {
        // Error handling if the image fails to load
        return -1;
    }

    // Display the image using the namedWindow and imshow functions
    cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);
    cv::imshow("Display Image", image);

    // Wait for a key press
    cv::waitKey(0);

    return 0;
}
/*
    WINDOWS
        - cd <directory>
        - mkdir build
        - cd build
        - cmake -DCMAKE_BUILD_TYPE=Release ..
        - cmake --build . --config Release

    To build MakeFiles in Windows
        - cmake -G "Unix Makefiles" ..
        - make

    Notes
    - To build : cmake -G "Visual Studio 16 2019" ..
    - To compile : cmake --build . --config Release
    - Exe will be in RELEASE folder

    Linux
        - cd <directory>
        - mkdir build
        - cd build
        - cmake -DCMAKE_BUILD_TYPE=Release ..
        - make
            - cmake --build . --config Release

    Path to JPEG : /home/ctnano/Desktop/Coding_Folder/OpenCV_Cmake_Basic_Example/Cat_Meme_.jpeg
        - use readlink -f new.txt to find file path
*/
