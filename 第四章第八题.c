#include "stdio.h"
#include "math.h"

void main()
{int x;
printf("������ɼ�\n");
scanf("%d",&x);

if(x>=90)
{
	printf("�ɼ��ȼ�ΪA\n");
}
else if(x>=80)
{
	printf("�ɼ��ȼ�ΪB\n");
}
else if(x>=70)
{
	printf("�ɼ��ȼ�ΪC\n");
}

else if(x>=60)
{
	printf("�ɼ��ȼ�ΪD\n");
}
else
{
    printf("�ɼ��ȼ�Ϊ������\n");
}


}