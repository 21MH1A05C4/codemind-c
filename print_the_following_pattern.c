#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        for(i=n;i>=1;i--)
        {
            printf("%d ",i);
        }
        printf("
");
    }
}