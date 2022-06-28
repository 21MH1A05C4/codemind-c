#include<stdio.h>
#include<math.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    r=(int)sqrt(n);
    if(r*r==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}