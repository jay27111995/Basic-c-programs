#include <stdio.h>
void main()
{
    char input_string[100],character_to_be_searched;
    int i,length_of_string,count=0;
    printf("enter any string \n");
    gets(input_string);
    printf("enter the character \n");
    scanf("%c",&character_to_be_searched);
    length_of_string=strlen(input_string);
    for(i=0;i<length_of_string;i++)
    {
        if(input_string[i]==character_to_be_searched)
            count++;
    }
    printf("%d",count);
}