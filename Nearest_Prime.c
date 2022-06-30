#include<stdio.h>
void fun(int a)
{
    int l=0,I,R,r=0,f=0;
    for(int i=a;l==0;i--)
    {
        f=0;
        for(int j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                f++;
            }
        }
        if(f==1)
        {
            l=i;
            I=a-l;
            break;
        }
    }
    for(int i=a;r==0;i++)
    {
        f=0;
        for(int j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                f++;
            }
        }
        if(f==1)
        {
            r=i;
            R=r-a;
            break;
        }
    }
    if(R>I||R==I)
    {
        printf("%d
",l);
    }
    else if(R<I)
    {
        printf("%d
",r);
    }
}
int main()
{
    int x,n;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d",&x);
        fun(x);
        n--;
    }
}