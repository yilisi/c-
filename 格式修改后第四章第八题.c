#include "stdio.h"
#include "math.h"

void main()
{   int x;
    printf("请输入成绩\n");
    scanf("%d",&x);

    if(x>=90)
	{
    	printf("成绩等级为A\n");
	}
    else if(x>=80)
	{
	    printf("成绩等级为B\n");
	}
    else if(x>=70)
	{
    	printf("成绩等级为C\n");
	}

    else if(x>=60)
	{
	    printf("成绩等级为D\n");
	}
    else
	{
        printf("成绩等级为E\n");
	}


}