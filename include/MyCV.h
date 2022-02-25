// 用于云台视频图像数据处理的头文件
#ifndef MYCV_H_INCLUDED
#define MYCV_H_INCLUDED
#endif // !MYCV_H_INCLUDED


#include <iostream>

#include "opencv.hpp" // opencv libraryheader file
#include <Eigen/Core>  // Eigen libraryheader file

#include "opencv2/xfeatures2d.hpp"  
#include "opencv2/video/tracking.hpp"
#include <opencv2/imgproc.hpp>
#include "opencv2/highgui.hpp"

using namespace std;

using namespace cv; //opencv namespace
using namespace Eigen; //Eigen namespace
using namespace cv::xfeatures2d;

#pragma once

#define pi 3.1415926
#define r2d 180/pi

// functions definition

void surfMatch(
    const Mat& image1,
    const Mat& image2,
    vector<KeyPoint>& keypoints_1,
    vector<KeyPoint>& keypoints_2,
    vector<DMatch>& matches);

void pose_estimation_2d2d(
    vector<KeyPoint>& keypoints_1,
    vector<KeyPoint>& keypoints_2,
    vector<DMatch>& matches,
    Mat& K,
    Mat& R,
    Mat& t,
    Mat& H);

void distortPTZImage(const Mat& oriImg, Mat & unImg);

Point2d pixel2cam(const Point2d& p, const Mat& K);

void pose_estimation(Mat& leftimage, Mat& rightimage, Mat& H, Vector3d& Rangle, Vector3d& trans);

void pose_estimation_matrix(Mat& leftimage, Mat& rightimage, Mat& H, Mat& R, Mat& t);

// evaluate the perfermance of the APR method by optical flow
void evaluation_results(Mat& calibrationImg, Mat& realImg, double& ADOF);

// draw the dense optical flow on the image
void drawOptFlowMap(const Mat& flow, Mat& cflowmap, int step,
                    const Scalar& color, double& ADOF);