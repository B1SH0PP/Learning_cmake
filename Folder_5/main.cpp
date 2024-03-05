#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    cv::Mat img = cv::imread("C:/Projects_C/learning_cmake/Folder_5/flower.jpg", 1);
    if (img.empty())
    {
        std::cout << "img is empty!" << std::endl;
        return -1;
    }
    else
    {
        cv::namedWindow("flower", 0);
        cv::imshow("flower", img);
        cv::waitKey(0);
        cv::destroyAllWindows();
        return 0;
    }
}