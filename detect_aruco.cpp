#include <opencv2/aruco.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv/cv.hpp>

using namespace cv;
using namespace std;
using namespace aruco;

void detect(const String& path ) {
    Mat inputImage = imread(path);
    vector<int> markerIds;
    vector<vector<Point2f>> markerCorners, rejectedCandidates;
    Ptr<DetectorParameters> parameters = DetectorParameters::create();
    Ptr<Dictionary> dictionary = getPredefinedDictionary(DICT_6X6_250);

    detectMarkers(inputImage, dictionary, markerCorners, markerIds, parameters, rejectedCandidates);
    Mat outputImage = inputImage.clone();
    drawDetectedMarkers(outputImage, markerCorners, markerIds);

    imshow("out", outputImage);
    waitKey(0);
}

int main(){
    detect("/home/tyoma/CLionProjects/OpenCV++/singlemarkersoriginal.jpg");
}