//
// Created by pollob on 4/12/2021.
//

#include <stdio.h>
#include <stdlib.h>

//Defining Constant
#define NULL_VALUE -9999
#define SUCCESS_VALUE 9999
/*
struct list_node;

struct list_node *list;

void initialize_list();
int insert_item_atBegin(int);
int insert_item_atEnd(int);
struct list_node* search_item(int);
int delete_item(int);
void see_list();

int main()
{
    initialize_list();
    insert_item_atBegin(80);
    see_list();
    insert_item_atBegin(70);
    see_list();
    insert_item_atBegin(60);
    see_list();
    insert_item_atBegin(40);
    see_list();
    delete_item(70);
    see_list();
    insert_item_atEnd(100);
    see_list();
    struct list_node* t=search_item(60);
    printf("60 : %d\n",t);

    return 0;
}

struct list_node
{
    int item;
    struct list_node *next;
};

void initialize_list()
{
    list=0;
}

int insert_item_atBegin(int data)
{
    struct list_node* newNode;

    newNode=(struct list_node*)malloc(sizeof(struct list_node));
    newNode->item=data;
    newNode->next=list;
    list=newNode;

    return SUCCESS_VALUE;
}

int insert_item_atEnd(int data)
{
    struct list_node *newNode,*temp,*prev;
    temp=list;
    while (temp!=0)
    {
        prev=temp;
        temp=temp->next;
    }

    newNode->item=data;
    newNode->next=0;
    prev->next=newNode;

    free(temp);

    return SUCCESS_VALUE;


    return SUCCESS_VALUE;
}

struct list_node* search_item(int data)
{
    struct list_node* temp;
    temp=list;

    while (temp!=0)
    {
        if (temp->item==data)
            return temp;

        temp=temp->next;
    }

    return 0;
}

int delete_item(int data)
{
    struct list_node *temp,*prev;
    temp=list;

    while (temp!=0)
    {
        if (temp->item==data)
            break;

        prev=temp;
        temp=temp->next;
    }

    if (temp==0)
        return NULL_VALUE;

    if (temp==list) //if one item exits and its match
    {
        list=list->next;
        free(temp);
    }
    else
    {
        prev->next=temp->next;
        free(temp);
    }

    return SUCCESS_VALUE;
}

void see_list()
{

    struct list_node *temp;

    temp=list;
    while (temp!=0)
    {
        printf("%d ",temp->item);
        temp=temp->next;
    }
    free(temp);
    printf("\n");
}

*/