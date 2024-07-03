//
// Created by Ray on 1/8/2022.
//
/*
#include<stdio.h>
#include <stdlib.h>
struct node {
    int value;
    struct node *next;
};
struct node *stack=NULL;

bool isEmpty()
{
    if(stack==NULL)
        return true;
    return false;
}

void push(int item)
{
    struct node *n=(struct node*) malloc(sizeof(struct node));
    struct node *temp=stack;

    n->value=item;
    n->next=NULL;
    if(isEmpty())
    {
        stack=n;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next=n;
    }


}

void view()
{
    struct node *temp=stack;
    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}
int pop() {
    int value;
    if (isEmpty())
        printf("Underflow\n");
    else {
        struct node *temp=stack;
        struct node *temp1=stack;
        if(stack->next==NULL)
        {
            value=stack->value;
            stack=NULL;
        }
        else
        {
            while(temp->next!=NULL)
            {
                temp1=temp;
                temp = temp->next;
            }
            value=temp->value;
            temp1->next=NULL;
        }

       return value;

    }
    return -1;
}
int main()
{
    push(10);
    view();
    push(20);
    view();
    push(100);
    view();
    printf("%d \n",pop());
    view();
    printf("%d \n",pop());
    view();
    printf("%d \n",pop());
    view();
    printf("%d \n",pop());
    view();
    printf("%d \n",pop());
    view();


    return 0;
}*/