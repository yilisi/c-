#include <stdio.h>                                          
int main(int argc, char *argv[]) {
	double a,b,c;
	double s1=0,s2=0,s3=0,sum;
	for(a=1;a<=100;a++)
	  {
		 s1=s1+a;
	  }
	for(b=1;b<=50;b++)
	  {
		 s2=s2+b*b;
	  }
	for(c=1;c<=10;c++)
	  {
		 s3=s3+1/c;
	  }
	sum=s1+s2+s3; 
	printf("所求数为%f",sum);
	return 0;
}
