#include "stdio.h"
#include "math.h"
void main()
{float a,b;
printf("������һ��С��1000������\n");
scanf("%f",&a);

if(a<=0||a>=1000)
{
	printf("���ֲ���Ҫ��������һ��С��1000������\n");
	scanf("%f",&a);
}

else{b=sqrt(a);
printf("������ƽ������%d\n",b);}

}