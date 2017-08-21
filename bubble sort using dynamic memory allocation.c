#include<stdio.h>
void main()
{
    int n,i,j,temp,*p;
    printf("enter the number of elements \n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter the elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((*(p+i))>(*(p+j)))
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    printf("The sorted list is \n");
    for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
    free(p);
}
