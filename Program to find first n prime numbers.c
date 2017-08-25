#include<stdio.h>
#include<stdlib.h>

void main()
{
int n=3,flag=1,i,a[100],j=1,k;
a[0]=2;
do
{
for(i=2;i<n;i++)
{
    if(n%i==0)
    {
        flag=0;
        break;
    }
}
if(flag==1)
{
    a[j]=n;
    j++;
}
n++;
}while(j<10);
for(k=0;k<10;k++)
{
    printf("%d ",a[k]);
}
}
