#include<stdio.h>
#include<string.h>
void main()
{
    void longwords(char str[]);
    char str1[80];
    int i;
    printf("please input a string:\n");
    gets(str1);
    i=strlen(str1);
    longwords(str1);
}
void longwords(char str[])
{
    int maxlen,len,i,j,src1=0,src2=0;
    maxlen=len=0;
    
    j=strlen(str);
    for(i=0;;i++)
    {
        while(str[i]==' ') i++;
        if(i==j)
            break;
        for(src2=i;i<j;i++)
        {
            if(str[i]==' ')
            {
                len=i-src2;
                if(len>maxlen)
                {
                    maxlen=len;
                    src1=src2;
                }
                break;
            }
        }
        if(i==j)
		break;    
    }
    for(i=src1;str[i]!=' ';i++)
    printf("%c",str[i]);
}