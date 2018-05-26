#include <stdio.h>


int main(int argc, char *argv[]) {
	int n,m,a,b,c;
	printf("请输入两个正整数："); 
	scanf("%d %d",&n,&m);
	if(n<m) 
	   {
	      a=n;
	      n=m;
	      m=a;
	   } 
	b=n*m;
	while(m!=0)
	  {
	     c=n%m;
		 n=m;
		 m=c;	
	  }
	printf("它们的最大公约数为：%d\n",n);
	printf("它们的最小公倍数为：%d\n",b/n);
	return 0;
}
