#include<stdio.h>
void main()
{
    int arr[100];    
    int position=4,number_of_elements,i,p,element_to_be_inserted=345;
    position--;
    for(number_of_elements=0;arr[number_of_elements]!='\0';number_of_elements++)
    {
    }
    printf("%d \n",number_of_elements);
    for(i=0;i<number_of_elements-position;i++)
    {
        arr[number_of_elements-i]=arr[number_of_elements-i-1];
    }
    arr[position]=element_to_be_inserted;
    number_of_elements=number_of_elements+1;
    for(p=0;p<number_of_elements;p++)
    {
        printf(" %d ",arr[p]);
    }
}
