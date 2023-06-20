#include <opencv2/opencv.hpp> // Include the main OpenCV header

int main()
{

    // Read an image using the imread function with the IMREAD_COLOR flag
    cv::Mat image = cv::imread("E:/Coding Folder/CMake Personal Projects/OpenCV_CMake_Test/Grumpy-Cat-2015-memes.jpeg", cv::IMREAD_COLOR);

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
