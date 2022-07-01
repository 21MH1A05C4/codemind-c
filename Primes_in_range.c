#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,m,n,c=0,co=0;
    scanf("%d%d",&m,&n);
    if(m==1)
    {
        m=2;
    }
    for(j=m;j<=n;j++)
    {
        co=0;
        for(i=2;i<=sqrt(j);i++)
        {
            if(j%i==0)
            {
                co++;
            }
        }
        if(co==0)
        {
            c++;
        }
    }
    printf("%d",c);
}