#include<stdio.h>
int main()
{
    char str[100];
    int c=0,i;
    scanf("%[^
]s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            c+=1;
        }
    }
    printf("%d",c+1);
}