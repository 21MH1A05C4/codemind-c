#include<stdio.h>
int main()
{
    int n,r=0;
    scanf("%d",&n);
    while(n!=0)
    {
        int a;
        a=n%10;
        if(r<a)
        {
            r=a;
        }
        n=n/10;
    }
    printf("%d",r);
}