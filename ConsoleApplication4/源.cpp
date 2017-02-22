#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

using namespace cv;
using namespace std;



int main()
{
	Mat image = imread("2.jpg");
	if (image.empty())
	{
		cout << "error" << endl;
		return -1;
	}
	imshow("Image", image);
	waitKey();
	return 0;
}