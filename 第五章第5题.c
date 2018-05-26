#include <stdio.h>                                          
int main(int argc, char *argv[]) {
	int i,a,n;
	long sn=0,sum=0;
	printf("«Î ‰»Îa∫Õn£∫");
	scanf("%d %d",&a,&n); 
	for(i=1;i<=n;i++)
	{
		sn=sn*10+a;
		sum=sum+sn;
	}
	printf("Sn=%ld\n",sum);
	return 0;
}
