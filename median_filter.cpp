#include <iostream>
#include <opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	VideoCapture cap;

	cap.open(0);

	while (1)
	{
		cv::Mat src;
		cv::Mat dst;

		cap >> src;
		cv::medianBlur(src, dst, 51); //中值滤波

		cv::imshow("原图", src);
		cv::imshow("中值滤波", dst);

		waitKey(30);
	}
}


