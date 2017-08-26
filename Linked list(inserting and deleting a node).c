#include <stdio.h>
#include <stdlib.h>

typedef struct node{
int data;
struct node *ptr;
} node;

node *head;

void insert(int element, int position)
{
    int i;
    node *temp1,*temp;
    temp1=NULL;
    temp=head;
    temp1=(node*)malloc(sizeof(node));
    temp1->data=element;
    if(position==1)
    {
        temp1->ptr=head;
        head=temp1;
        return;
    }
    for(i=0;i<position-2;i++)
    {
        temp=temp->ptr;
    }
    temp1->ptr=temp->ptr;
    temp->ptr=temp1;
}

void pri()
{
    node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->ptr;
    }

}

void del(int position)
{
    int i;
    node *temp,*temp1;
    temp=head;
    for(i=0;i<position-2;i++)
    {
        temp=temp->ptr;
    }
    temp1=temp->ptr;
    temp->ptr=temp1->ptr;
    free(temp1);
}

void main()
{
    head=NULL;
    insert(1,1);
    insert(2,2);
    insert(3,3);
    insert(4,1);
    insert(5,5);
    del(3);
    pri();
}

