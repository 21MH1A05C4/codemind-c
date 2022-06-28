#include<stdio.h>
int main()
{
    int n,r,i=1;
    scanf("%d%d",&n,&r);
    while(n*i%r!=0)
    {
        i++;
    }
    printf("%d",n*i);
}