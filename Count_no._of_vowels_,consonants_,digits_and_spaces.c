#include<stdio.h>
int main()
{
    int cv,cc,cd,cw,i;
    char str[100];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            cv+=1;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            cd+=1;
        }
        else if(str[i]==' ')
        {
            cw+=1;
        }
        else
        {
            cc+=1;
        }
    }
    printf("Vowels:% d
",cv);
    printf("Consonants:% d
",cc);
    printf("Digits:% d
",cd);
    printf("White spaces:% d
",cw);
}