#include <stdio.h>

int isprime(long int n)
{
    long int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

void main()
{
    long int count=0,number=1,nth;
    printf("enter n \n");
    scanf("%d",&nth);
    while(count!=nth)
    {
        number++;
        if(isprime(number)==1)
        {
            count++;
        }
    }
    printf("Nth prime number is %d",number);
}
