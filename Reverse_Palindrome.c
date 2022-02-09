#include<stdio.h>
int palin(int n)
{
	int rem,rev=0;
	while(n)
	{
	rem=n%10;
	rev=rev*10+rem;
	n/=10;
	}
	return rev; 
}
int main()
{
	int x;
	scanf("%d",&x);
	do
	
		{
		sum=temp1+rev1;//59+95=154
		temp=palin(sum);
		if(sum==temp)
		{
			printf("%d ",sum);
			break;
		}
		temp1=sum;
		rev1=temp;
		}
}