#include <stdio.h>                                          
int main(int argc, char *argv[]) {
	int i,j;
	long s=1,sum=1;
	for(j=1;j<=20;j++)
	  {
	   for(i=1;i<=j;i++)
	     {
		   s=s*i;
	     }
	     
	    sum=sum+s;
	  }
	printf("������Ϊ%ld\n",sum);
	return 0;
}
