#include "stdio.h"
#include "math.h"

void main()
{   int a,b,c,d,e,x;
    printf("������һ��������5λ��������\n");
    scanf("%d",&x);

    a=x/10000;
    b=x%10000/1000;
    c=x%10000%1000/100;
    d=x%10000%1000%100/10;
    e=x%10000%1000%100%10/1;

    if(a!=0)
	{
       printf("%d %d %d %d %d\n",a,b,c,d,e);
       printf("%d %d %d %d %d\n",e,d,c,b,a);
	}
    else if(b!=0)
	{
       printf("%d %d %d %d\n",b,c,d,e);
       printf("%d %d %d %d\n",e,d,c,b);
	}
    else if(c!=0)
	{
       printf("%d %d %d\n",c,d,e);
       printf("%d %d %d\n",e,d,c);
	}
    else if(d!=0)
	{
       printf("%d %d\n",d,e);
       printf("%d %d\n",e,d);
	}
    else if(e!=0)
	{
       printf("%d\n",e);
       printf("%d\n",e);
	}

    if(x>=10000)
	{
	    printf("������λ��\n�ֱ����ÿ������Ϊ%d %d %d %d %d\n�������ÿ������Ϊ%d %d %d %d %d\n",a,b,c,d,e,e,d,c,b,a);
	}
    else if(x>=1000)
	{
	    printf("������λ��\n�ֱ����ÿ������Ϊ%d %d %d %d\n�������ÿ������Ϊ%d %d %d %d\n",b,c,d,e,e,d,c,b);
	}
    else if(x>=100)
	{
 	    printf("������λ��\n�ֱ����ÿ������Ϊ%d %d %d\n�������ÿ������Ϊ%d %d %d\n",c,d,e,e,d,c);
	}

    else if(x>=10)
	{
 	    printf("���Ƕ�λ��\n�ֱ����ÿ������Ϊ%d %d\n�������ÿ������Ϊ%d %d\n",d,e,e,d);
	}
    else
	{
        printf("����һλ��\n�ֱ����ÿ������Ϊ%d %d %d %d %d\n�������ÿ������Ϊ%d %d %d %d %d\n",e,e);
	}

} 