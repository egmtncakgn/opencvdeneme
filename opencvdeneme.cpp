// 24.05.24 Staj için openCv ve c++ denemeleri

#include <opencv2/opencv.hpp>

int main()
{

    cv::Mat image = cv::imread("path_to_image.jpg");
    if (image.empty()) {
        std::cout << "Could not open or find the image!" << std::endl;
        return -1;
    }
    cv::imshow("Display window", image);
    cv::waitKey(0); // Wait for a keystroke in the window
    return 0;
}