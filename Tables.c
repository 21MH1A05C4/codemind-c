#include<stdio.h>
int main()
{
    int n,i,e;
    scanf("%d%d",&n,&e);
    for(i=1;i<=e;i++)
    {
        if(i%2!=0)
        {
            printf("%d x %d = %d
",n,i,n*i);
        }
    }
}