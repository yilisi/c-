#include <stdio.h>                                          
int main(int argc, char *argv[]) {
	char x;
	int ch,a,b,c,d;
	printf("������һ���ַ�:");
	scanf("%c",&x); 
	a=b=c=d=0;
	while((ch=getchar())!='\n')
	{
		if(ch>='0'&&ch<='9')
		{
			a++;
		}
		else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		{
			b++;
		}
		else if(ch==' ')
		{
			c++;
		}
		else
		{
			d++;
		}
	}
	printf("������%d��Ӣ���ַ���\n",b);
	printf("������%d���ո�\n",c);
	printf("������%d�����֡�\n",a);
	printf("������%d�������ַ���\n",d);
	return 0;
}
