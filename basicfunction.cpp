#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


/////////////////  Images  //////////////////////

void main() {

    string path = "Resources/test.png";
    Mat img = imread(path);
    Mat imgGray,imgBlur,imgCanny;

    cvtColor(img, imgGray, COLOR_BGR2GRAY);
    GaussianBlur(img, imgBlur, Size(5, 5), 3, 0);
    Canny(img, imgCanny, 50, 100);
    imshow("Image", img);
    imshow("Image GRAY", imgGray);
    imshow("Image BLUR", imgGray);
    imshow("Image CANNY", imgCanny);
    waitKey(0);

}