#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d,t;
	printf("�������һ������ ");
	scanf("%d",&a);
	printf("������ڶ������� ");
	scanf("%d",&b);
	printf("��������������� ");
	scanf("%d",&c);
	printf("��������ĸ����� ");
	scanf("%d",&d);
	
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	if(a>c)
	{
		t=a;
		a=c;
		c=t;
	}
	if(a>d)
	{
		t=a;
		a=d;
		d=t;
	}
	if(b>c)
	{
		t=b;
		b=c;
		c=t;
	}
	if(b>d)
	{
		t=b;
		b=d;
		d=t;
	}
	if(c>d)
	{
		t=c;
		c=d;
		d=t;
	}
	printf("���ĸ�����С��������Ϊ��%d %d %d %d\n",a,b,c,d);
	return 0;
}
