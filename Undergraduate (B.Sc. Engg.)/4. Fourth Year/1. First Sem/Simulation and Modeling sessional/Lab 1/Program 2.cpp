// Copyright (c) Ray

//
// Created by Ray on 19-Jul-23.
//

/*
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int value;
    struct node *next;
};

struct node* addValue(struct node *list,int val)
{
    struct node *newVal=new node;

    newVal->value=val;
    newVal->next= nullptr;

    if(list== nullptr)
    {
        list=newVal;
    }
    else
    {
        struct node* temp;
        temp=list;

        while(temp->next!= nullptr)
        {
            temp=temp->next;
        }
        temp->next=newVal;
    }
    return list;
}

void printValue(struct node* list)
{
    while(list!= nullptr)
    {
        cout<<list->value<<" ";
        list=list->next;
    }
    cout<<endl;
}

struct node* deleteValue(struct node* list,int value)
{
    struct node* temp=list;
    struct node* temp1;

    if(temp== nullptr)
    {
        return temp;
    }
    else if(temp->value==value)
    {
        temp=temp->next;
        return temp;
    }
    else
    {
        while(temp->next != nullptr)
        {
            if(temp->value==value)
            {
                break;
            }
            temp1=temp;
            temp=temp->next;
        }
        if(temp->value==value)
        {
           temp1->next=temp->next;
        }
        return list;
    }
}

int main()
{
    struct node *list;
    list= nullptr;

    for (int i = 0; i <50 ; ++i)
    {
        list= addValue(list,(rand()%50)+1);
    }
    printValue(list);


    cout<<"Deleting Value"<<endl;
    for (int i = 0; i <50 ; ++i)
    {
        int val=(rand()%50)+1;
       for (int j = 0; j <50 ; ++j)
        {
            list= deleteValue(list,val);
        }
        cout<<"After Deleting "<<val<<endl;
        printValue(list);
    }


    return 0;
}*/
