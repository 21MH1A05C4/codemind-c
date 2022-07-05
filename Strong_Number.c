#include<stdio.h>
int main()
{
    int n,i,fact,s=0,r,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        i=1,fact=1;
        r=n%10;
        while(i<=r)
        {
            fact=fact*i;
            i++;
        }
        s=s+fact;
        n=n/10;
    }
    if(s==temp)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
}
