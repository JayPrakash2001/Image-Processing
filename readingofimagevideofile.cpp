#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


/////////////////  Images  //////////////////////

//void main() {
//
//    string path = "Resources/test.png";
//    Mat img = imread(path);
//    imshow("Image", img);
//    waitKey(0);
//
//}

//////// video //////////

//string path = "Resources/test_video.mp4";
//VideoCapture cap(path);
//Mat img;
//void main() {
//
//    while (true) {
//        cap.read(img);
//        imshow("Image", img);
//        waitKey(1);
//    }
//
//}

//////// web camera //////////
VideoCapture cap(0);
Mat img;
void main() {

    while (true) {
        cap.read(img);
        imshow("Image", img);
        waitKey(1);
    }

}