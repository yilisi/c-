#include "stdio.h"
#include "math.h"

void main()
{int x,y;
printf("请输入一个数字\n");
scanf("%d",&x);

if(x<1)
{
	y=x;
}
else if(x<10&&x>=1)
{
	y=2*x-1;
}
else{
    y=3*x-11;
}

printf("x对应的值为%d\n",y);

}