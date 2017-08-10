#include <stdio.h>
void main()
{
    char IP[16];
    puts("Enter IP address");
    gets(IP);
    char IP_Parts[5][5];
    int c=0,i,j=0,Length_of_IP,Validity=0,a;
    Length_of_IP=strlen(IP);
    for(i=0;i<Length_of_IP;i++)
        {
        if(IP[i]=='.')
            c++;
            j=0;
        else
            IP_Parts[c][j]=IP[i];
            j++;
    }
if(c==3) //Number of dots
{
        for(a=0;a<4;a++)
            {
                if(atoi(IP_Parts[a])<=255)
                   Validity++;
            }
}
if(Validity==4)
    printf("valid IP address");
else
    printf("INVALID");
}
