#include <stdio.h>                                          
int main(int argc, char *argv[]) {
	char x;
	int ch,a,b,c,d;
	printf("请输入一行字符:");
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
	printf("其中有%d个英文字符。\n",b);
	printf("其中有%d个空格。\n",c);
	printf("其中有%d个数字。\n",a);
	printf("其中有%d个其他字符。\n",d);
	return 0;
}
