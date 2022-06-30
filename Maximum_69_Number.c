#include<stdio.h>
int main()
{
    int n,rev=0,s=0,c=0;
    scanf("%d",&n);
    while(n)
    {
        rev=(rev*10)+(n%10);
        n/=10;
    }
    while(rev)
    {
        if(rev%10==6&&c==0)
        {
            s=(s*10)+9;
            c++;
        }
        else
        {
            s=(s*10)+(rev%10);
        }
        rev/=10;
    }
    printf("%d",s);
}