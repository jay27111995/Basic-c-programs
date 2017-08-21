#include<stdio.h>
void main()
{
    int arr[10]={9,5,6,2,1,0,8,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j,temp;
    printf("The array size is %d",n);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
               {
                   temp=arr[j];
                   arr[j]=arr[i];
                   arr[i]=temp;
               }
        }

    }
    printf("the sorted array is \n");
    for(i=0;i<n;i++)
    {
        printf("%d",*arr+i);
    }
}
