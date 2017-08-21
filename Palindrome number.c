#include<stdio.h>
#include<math.h>
void main()
{
    unsigned long int n,d=1,temp,num;
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
    num=pow(10,count/2);
    if(n/num==n%num)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }
}
