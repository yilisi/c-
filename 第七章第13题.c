
#include<stdio.h>
float p(int n,float x)
{   float y;
    if(n==0) y=1;
      else if(n==1) y=x;
            else y=((2*n-1)*x-p(n-1,x)-(n-1)*p(n-2,x));
    return y;
}
 
int main()
{
    int n;//Ӧ����;
    float x;
    scanf("%d%f",&n,&x);
    printf("����ֵΪ%2.0f\n",p(n,x));
return 0;
}