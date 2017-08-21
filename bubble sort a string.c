#include<stdio.h>
void main()
{
    char str[100],temp;
    int i,j,n;
    printf("enter a string \n");
    gets(str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]>=97&&str[i]<=122)
            {
               str[i]=str[i]-32;
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("the sorted string is \n %s",str);
}
