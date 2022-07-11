#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


/////////////////  Images  //////////////////////

float w = 250, h = 350;
void main() {

    string path = "Resources/cards.jpg";
    Mat img = imread(path);
    Mat matrix, imgWarp;
    Point2f src[4] = { {63,320},{337,275}, {90,630},{400,570} };
    Point2f dst[4] = { {0.0f,0.0f},{w,0.0f},{0.0f,h},{w,h} };
    matrix = getPerspectiveTransform(src, dst);
    warpPerspective(img, imgWarp, matrix, Point(w, h));

    for (int i = 0; i < 4; i++)
        circle(img, src[i], 10, Scalar(0, 255, 0), 3);
    imshow("Image", img);
    imshow("Image WARP", imgWarp);
    waitKey(0);

}