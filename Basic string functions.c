#include <stdio.h>
#include <string.h>

void main()
{
    int n,a;
    char str1[100],str2[100],str3[100];
    printf("Enter two string \n");
    gets(str1);
    gets(str2);
    n=strlen(str1);
    printf("%d \n",n);
    strupr(str1);
    puts(str1);
    strlwr(str1);
    puts(str1);
    a=strcmp(str1,str2);
    printf("%d \n",a);
    a=strcmpi(str1,str2);
    printf("%d \n",a);
    a=strncmp(str1,str2,3);
    printf("%d \n",a);
    strcat(str1,str2);
    puts(str1);
    strcpy(str3,str1);
    puts(str3);
    strrev(str3);
    puts(str3);
}
