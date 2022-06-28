#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,s=0,d,m;
    scanf("%d",&n);
    m=n;
    d=(int)log10(n)+1;
    while(n)
    {
        r=n%10;
        s=s+ceil(pow(r,d));
        n=n/10;
        d--;
    }
    if(s==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}