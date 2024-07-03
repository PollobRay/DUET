//
// Created by Ray on 1/25/2022.
//

/*
#include<bits/stdc++.h>
using namespace std;

class NODE
{
public:
    int data;
    NODE *next;
    NODE()
    {
        next=NULL;
    }
};
void Insert_Last(NODE *&head,int val)
{
    NODE *newnode=new NODE;
    newnode->data=val;
    if(head == NULL)
    {
        head=newnode;
        newnode->next=head;
    }
    else{
        NODE *temp=head;
        while(temp->next != head)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=head;
    }
    cout<<"Successfully Inserted\n";
}
void Delete_last(NODE *&head)
{
    if(head == NULL){
        cout<<"No elements to delete.\n";
    }
    else{
        NODE *temp=head;
        while(temp->next->next != head)
        {
            temp=temp->next;
        }
        temp->next=head;
    }
}
void print(NODE *head)
{
    NODE *temp=head;
    if(head == NULL)
        cout<<"Empty list\n";
    else
    {
        cout<<"Elements are: ";
        cout<<temp->data<<" ";
        temp=temp->next;
        while(temp!= head)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}
int main()
{
    NODE *head=NULL;
    Insert_Last(head,30);
    Insert_Last(head,40);
    Insert_Last(head,50);
    Insert_Last(head,60);
    print(head);
    Delete_last(head);
    print(head);
    Insert_Last(head,70);
    Insert_Last(head,80);
    Insert_Last(head,90);
    print(head);

}

 */