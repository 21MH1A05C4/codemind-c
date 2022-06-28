#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,n,d=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        c=a+b;
        if(c==n)
        {
            d+=1;
        }
        a=b;
        b=c;
    }
    if(d>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}