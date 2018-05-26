#include <stdio.h>                                          
int main(int argc, char *argv[]) {
	int a,b,c,s;
	printf("水仙花数有");
	for(a=0;a<10;a++)
	  {
	  	for(b=0;b<10;b++)
		  {
	  	     for(c=0;c<10;c++)
			   {
	  	     	  s=100*a+10*b+10*c;
	  	     	  if(s==(a*a*a+b*b*b+c*c*c))
					 {
					    printf("%d ",s);
					 }
			   }
	      }
      }   
		 
	return 0;
}
