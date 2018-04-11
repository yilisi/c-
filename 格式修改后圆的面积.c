#include "stdio.h"
#include "math.h"
#define pi 3.1415926

void main()
{   
	float r,l,s;
    printf("请输入圆的半径\n");
    scanf("%f",&r);
    s=pi*r*r;
    printf("圆周率和半径分别为%f，%f\n圆的面积为%f\n",pi,r,s);
}