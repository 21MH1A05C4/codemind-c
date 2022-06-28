#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    r=n*n;
    int s=0,k;
    while(r)
    {
        k=r%10;
        s=s+k;
        r=r/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}