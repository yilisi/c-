#include<stdio.h>
#include<string.h>
void main()
{
 char q[100];
 char *p;
 int a=0,b=0,c=0,d=0,e=0,f=0,i;
 p=q;
 for(i=0;i<100;i++)
  q[i]=0;
 printf("�������ַ���\n");
    gets(p);
 for(i=0;i<100;i++)
 {
  if(*p==0)
  {
   e++;f++;
  }
  else
  {
     f=0;
      if(*p>64&&*p<91)
          a++;
      else if(*p>96&&*p<123)
          b++;
      else if(*p==32)
          c++;
      else if(*p>47&&*p<58)
          d++;
      else e++;
      p++; 
  }
 }
 e=e-f;
 printf("���ַ�����\n");
 printf("��д��ĸ��%d��\n",a);
 printf("Сд��ĸ��%d��\n",b);
 printf("�ո���%d��\n",c);
 printf("������%d��\n",d);
 printf("�����ַ���%d��\n",e);
}