#include<stdio.h>
int main()
{
	int a,b,c,*p1,*p2,*p3,*p;
	printf("������3�������Զ��Ÿ���\n");
	scanf("%d,%d,%d",&a,&b,&c);
	p1=&a;p2=&b;p3=&c;
	if(*p1>*p2)
	  {
   	     p=p1;
	     p1=p2;
		 p2=p;
      }
	if(*p1>*p3)
      {
	     p=p1;
		 p1=p3;
		 p3=p;
       }
	if(*p2>*p3)
	   {
	      p=p2;
          p2=p3;
		  p3=p;
       }
	printf("��С����������\n");
	printf("%d,%d,%d",*p1,*p2,*p3);
	return 0;
}