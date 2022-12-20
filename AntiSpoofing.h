#pragma once
#include <time.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


#define NewHeight 96
#define NewWidth 96


typedef unsigned char U_CHAR;



/// <summary>
/// 活体检测
/// </summary>
/// <param name="img">输入图像数据</param>
/// <param name="width">图像宽度</param>
/// <param name="height">图像高度</param>
/// <param name="x_min">人脸框左上角x坐标</param>
/// <param name="y_min">人脸框左上角y坐标</param>
/// <param name="box_w">人脸框宽度</param>
/// <param name="box_h">人脸框高度</param>
/// <param name="threshold">阈值，大于阈值返回1（真人脸），小于阈值返回0（假人脸），测试集中最佳阈值为0.4724</param>
/// <returns></returns>
char AntiSpoofing(U_CHAR* img, int width, int height, int x_min, int y_min, int box_w, int box_h,float threshold);

//获取版本号
char* getVersion();

