#include<stdio.h>
int main()
{
    int m,n,c=0,i,t;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d%d",&m,&n);
        c=0;
        for(i=m;i<=n;i++)
        {
            int r=i%10;
            if(r==2||r==3||r==9)
            {
                c++;
            }
        }
        printf("%d
",c);
        t--;
    }
}