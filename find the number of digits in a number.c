#include<stdio.h>
void main()
{
    unsigned long int n,d=1,temp;
    int count=0;
    printf("enter a number");
    scanf("%ld",&n);
    temp=n;
    while(d!=0)
    {
        d=temp/10;
        count++;
        temp=d;
    }
    printf("The number of digits are\n%d",count);
}
