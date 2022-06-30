#include<stdio.h>
int main()
{
    int n,o=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==1)
        {
            o++;
        }
    }
    if(o>2)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}