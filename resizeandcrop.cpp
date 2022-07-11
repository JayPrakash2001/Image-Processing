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
    Mat imgResize, imgCrop;
    resize(img, imgResize, Size(), 0.75, 0.75);
    Rect roi(200, 60, 300, 300);
    imgCrop = img(roi);
    
    imshow("Image", img);
    imshow("Image RESIZE", imgResize);
    imshow("Image CROP", imgCrop);
    waitKey(0);

}