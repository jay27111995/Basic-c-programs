#include<stdio.h>
void main()
{
    char str[100];
    int i;
    printf("enter a string \n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' '||str[i]!='.'||str[i]!=','||str[i]!='!'||str[i]!='?'||str[i]!='-'||str[i]!='"'||str[i]!='\'')
        {
            if(str[i]<=122&&str[i]>=90)
            {
                str[i]=str[i]-32;
            }
        }
    }
    puts(str);
}
