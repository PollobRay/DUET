//
// Created by pollob on 4/12/2021.
//
/*
#include <stdio.h>
#include <stdlib.h>

//Defining Constant
#define NULL_VALUE -9999
#define SUCCESS_VALUE 9999

//Declaring global
struct listNode;
struct listNode* list;
struct listNode* tail;

void initializeList();
int insertItemAtBegin(int);
int insertItemAtEnd(int);
void seeList();
int deleteItemAtBegin();
int deleteItemAtEnd();
int deleteItem(int);
int deleteIthItem(int);
struct listNode* searchItemFromBegin(int);
struct listNode* searchItemFromEnd(int);


int main()
{
    initializeList();
    insertItemAtBegin(10);
    seeList();
    insertItemAtBegin(5);
    seeList();
    insertItemAtBegin(2);
    seeList();
    insertItemAtEnd(50);
    seeList();
    insertItemAtEnd(100);
    seeList();
    deleteIthItem(1);
    seeList();


    return 0;
}

struct listNode
{
    int item;
    struct listNode* prev;
    struct listNode* next;
};

void initializeList()
{
    list=0;
    tail=0;
}

int insertItemAtBegin(int item)
{
    struct listNode* newNode;
    newNode=(struct listNode*)malloc(sizeof (struct listNode));
    newNode->item=item;
    newNode->next=list;
    newNode->prev=0;
    list=newNode;
    if (newNode->next!=0)
        newNode->next->prev=newNode;
    else
        tail=newNode;

    return SUCCESS_VALUE;

}

int insertItemAtEnd(int item)
{
    struct listNode* newNode=(struct listNode*)malloc(sizeof(struct listNode));
    newNode->item=item;
    newNode->prev=tail;
    newNode->next=0;
    tail=newNode;

    if (newNode->prev!=0)
        newNode->prev->next=newNode;
    else
        list=newNode;

    return SUCCESS_VALUE;
}

int deleteItemAtBegin()
{
    if (list==0)
        return NULL_VALUE;

    if (list==tail)
    {
        list=list->next;
        tail=list;
    }
    else
    {
        list->next->prev=list->prev;
        list=list->next;
    }

    return SUCCESS_VALUE;
}

int deleteItemAtEnd()
{
    if (list==0)
        return NULL_VALUE;

    if (list==tail)
    {
        list=list->next;
        tail=list;
    }
    else
    {
        tail->prev->next=tail->next;
        tail=tail->prev;
    }

    return SUCCESS_VALUE;
}

int deleteItem(int item)
{
    struct listNode *temp,*prev;
    temp=list;

    while (temp!=0)
    {
        prev=temp->prev;
        if (temp->item==item)
            break;
        temp=temp->next;
    }

    if (temp==0)
        return NULL_VALUE;

    if(temp==tail)
    {
        if (tail==list)
            tail=0;
        else
            tail=prev;
    }
    if (temp==list) //if one item exits and its match
    {
        list=list->next;
        free(temp);
    }
    else
    {

       prev->next=temp->next;
        if (prev!=tail)
            temp->next->prev=prev;
        free(temp);
    }

    return SUCCESS_VALUE;
}

int deleteIthItem(int i)
{
    int pos=0; // we assume position start from 0 like array
    struct listNode *temp,*prev;
    temp=list;

    while (temp!=0)
    {
        prev=temp->prev;
        if (pos==i)
            break;
        temp=temp->next;
        pos++;
    }

    if (temp==0)
        return NULL_VALUE;

    if(temp==tail)
    {
        if (tail==list)
            tail=0;
        else
            tail=prev;
    }
    if (temp==list) //if one item exits and its match
    {
        list=list->next;
        free(temp);
    }
    else
    {

        prev->next=temp->next;
        if (prev!=tail)
            temp->next->prev=prev;
        free(temp);
    }

    return SUCCESS_VALUE;
}

struct listNode* searchItemFromBegin(int item)
{
    struct listNode* temp;
    temp=list;
    while (temp!=0)
    {
        if (temp->item==item)
            return temp;
        temp=temp->next;
    }

        return NULL_VALUE;
}

struct listNode* searchItemFromEnd(int item)
{
    struct listNode* temp;
    temp=tail;
    while (temp!=0)
    {
        if (temp->item==item)
        {
            return temp;
        }
        temp=temp->prev;
    }

    return NULL_VALUE;

}

void seeList()
{
    struct listNode* temp=(struct listNode*)malloc(sizeof(struct listNode));
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