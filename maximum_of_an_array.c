#include<stdio.h>
int main()
{
    int n,i,a[100],m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
        }
    }
    printf("%d",m);
}