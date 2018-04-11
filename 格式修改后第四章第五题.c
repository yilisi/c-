#include "stdio.h"
#include "math.h"

void main()
{   float a,b;
    printf("请输入一个小于1000的正数\n");
    scanf("%f",&a);

    if(a<=0||a>=1000)
	{
    	printf("数字不合要求，请输入一个小于1000的正数\n");
 	    scanf("%f",&a);
	}

    else{b=sqrt(a);
    printf("该数的平方根是%d\n",b);}

}