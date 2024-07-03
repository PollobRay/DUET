//
// Created by pollob on 4/12/2021.
//

#include <stdio.h>
#include <stdlib.h>

// defining constant
#define LIST_INITIAL_VALUE 100
#define NULL_VALUE -9999
#define SUCCESS_VALUE 9999

//declaring global variable
int list_max_size;
int *list;
int list_length;

int initial_list();
int insert_item_atBegin(int data);
int insert_item_atEnd(int data);
int delete_item_atBegain();
int delete_item_atEnd();
int search_item(int data);
void see_list();
/*
int main()
{
    initial_list();
    insert_item_atBegin(10);
    see_list();
    insert_item_atBegin(5);
    see_list();
    insert_item_atEnd(20);
    see_list();
    delete_item_atBegain();
    see_list();
    delete_item_atEnd();
    see_list();
    insert_item_atEnd(30);
    insert_item_atEnd(40);
    insert_item_atEnd(50);
    see_list();
    delete_item_atEnd();
    see_list();
    delete_item_atBegain();
    see_list();
    printf("40 = %d ",search_item(40));


    return 0;
}

int initial_list()
{
    list_max_size=LIST_INITIAL_VALUE;
    list=(int *) malloc(sizeof (int)*list_max_size);
    list_length=0;
}

int insert_item_atBegin(int data)
{
    int *templist;
    if (list_length==list_max_size)
        list_length*=2;

    templist=(int *)malloc(sizeof(int)*list_length );

    templist[0]=data;
    for (int i = 0; i < list_length; ++i)
    {
        templist[i+1]=list[i];
    }
    list_length++;
    free(list);
    list=templist;

    return SUCCESS_VALUE;
}

int insert_item_atEnd(int data)
{

    if (list_length==list_max_size)
    {
        int *templist;

        list_length*=2;
        templist=(int *)malloc(sizeof(int)*list_length );

        for (int i = 0; i < list_length; ++i)
        {
            templist[i]=list[i];
        }
        free(list);
        list=templist;
    }

    list[list_length++]=data;


    return SUCCESS_VALUE;
}

int delete_item_atBegain()
{
    if (list_length==0)
        return NULL_VALUE;

    for (int i = 0; i <list_length-1; ++i)
    {
        list[i]=list[i+1];
    }
    list_length--;

    return SUCCESS_VALUE;
}

int delete_item_atEnd()
{
    if (list_length==0)
        return NULL_VALUE;

    list_length--;
    return SUCCESS_VALUE;
}

int search_item(int data)
{
    if (list_length==0)
        return NULL_VALUE;

    for (int i = 0; i < list_length; ++i)
    {
        if (list[i]==data)
            return i;
    }

    return NULL_VALUE;
}

void see_list()
{
    for (int i = 0; i < list_length; ++i)
    {
        printf("%d ",list[i]);
    }
    printf("\n");
}
 */