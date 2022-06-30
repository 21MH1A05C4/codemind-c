#include<stdio.h>
int main()
{
    int n,x,s=1;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&x);
        s=1;
        while(x!=1)
        {
            s*=x;
            x--;
        }
        printf("%d
",s);
    }
}