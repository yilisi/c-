#include <stdio.h>


int main(int argc, char *argv[]) {
	int n,m,a,b,c;
	printf("������������������"); 
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
	printf("���ǵ����Լ��Ϊ��%d\n",n);
	printf("���ǵ���С������Ϊ��%d\n",b/n);
	return 0;
}
