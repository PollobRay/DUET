//
// Created by Ray on 1/31/2022.
//
// circular linked list using Doubly linked list

#include <iostream>
using namespace std;
/*
class Node
{
private:
    int data;
    Node *prev;
    Node *next;
public:
    Node():prev(nullptr),next(nullptr)
    {}
    Node* getPrev()
    {
        return prev;
    }
    Node* getNext()
    {
        return next;
    }
    int getData()
    {
        return data;
    }
    void setData(int d)
    {
        data=d;
    }
    void setPrev(Node *p)
    {
        prev=p;
    }
    void setNext(Node *n)
    {
        next=n;
    }
};

class DoublyLinkedList
{
private:
    Node *list;
public:
    DoublyLinkedList():list(nullptr){}

    void insertDataAtFront(int);
    void insertDataAtBack(int);
    void insertDataSorted(int);
    void deleteDataAtFront();
    void deleteDataAtBack();
    void deleteData(int);
    void printData();
};

void DoublyLinkedList::insertDataAtFront(int d)
{
    Node *newNode=new Node;
    newNode->setData(d);

    if(list== nullptr)
    {
        newNode->setNext(newNode);
        newNode->setPrev(newNode);
        list=newNode;
    }
    else
    {
        newNode->setNext(list);
        newNode->setPrev(list->getPrev());
        newNode->getPrev()->setNext(newNode);
        list->setPrev(newNode);
        list=newNode;
    }
}

void DoublyLinkedList::insertDataAtBack(int d)
{
    Node *newNode=new Node;
    newNode->setData(d);
   // newNode->setNext(nullptr);

    if(list== nullptr)
    {
        newNode->setPrev(newNode);
        newNode->setNext(newNode);
        list = newNode;
    }
    else
    {
        Node *temp;
        temp=list->getPrev(); //last

        newNode->setNext(list);
        list->setPrev(newNode);
        newNode->setPrev(temp);
        temp->setNext(newNode);
    }
}

void DoublyLinkedList::insertDataSorted(int d)
{
    Node *newNode=new Node;

    newNode->setData(d);
    if (list== nullptr)
    {
        newNode->setPrev(newNode);
        newNode->setNext(newNode);
        list=newNode;
    }
    else
    {
        Node *temp;
        temp=list;

        while(temp->getNext()!= list && temp->getData()<d)
        {
            temp=temp->getNext();
        }
        if(temp==list && temp->getData()>d)
        {
            insertDataAtFront(d);
            return;
        }
        else if(temp->getNext()== list && temp->getData()<d)
        {
            insertDataAtBack(d);
            return;
        }
        else
        {
            newNode->setPrev(temp->getPrev());
            newNode->setNext(temp);
            temp->getPrev()->setNext(newNode);
            temp->setPrev(newNode);

        }
    }

}

void DoublyLinkedList::deleteDataAtBack()
{
    if(list== nullptr)
        cout<<"Empty"<<endl;
    else
    {
        Node *temp;
        temp=list;
        while(temp->getNext()!= list)
        {
            temp=temp->getNext();
        }
        temp->getPrev()->setNext(list);
        list->setPrev(temp->getPrev());

        delete temp;
    }
}

void DoublyLinkedList::deleteDataAtFront()
{
    Node *temp;
    temp=list;
    if(temp== nullptr)
    {
        cout<<"Empty"<<endl;
    }
    list=list->getNext();
    if(list!= nullptr)
        list->setPrev(nullptr);

    delete temp;
}

void DoublyLinkedList::deleteData(int d)
{
    if (list== nullptr)
    {
        cout<<"Empty"<<endl;
        return;
    }

    Node *temp;
    temp=list;

    while(temp!= nullptr && temp->getData()!=d)
    {
        temp=temp->getNext();
    }
    if(temp== nullptr)
    {
        cout<<"Not exits"<<endl;
    }
    else if(temp==list)
    {
        list=list->getNext();
        if(list!= nullptr)
            list->setPrev(nullptr);

        delete temp;
    }
    else
    {
        temp->getPrev()->setNext(temp->getNext());
        delete temp;
    }
}

void DoublyLinkedList::printData()
{
    Node *temp=list;
    int i;
    cout<<"Printing values"<<endl;
    if(list== nullptr)
    {
        cout<<"Empty"<<endl;
        return;
    }
    //while(temp!= nullptr)
    for (i = 1; i <6 ; i++)
    {
        cout<<temp->getData()<<" ";
        temp=temp->getNext();
    }
    cout<<endl;
}

int main()
{
    DoublyLinkedList list;

    //list.insertDataAtBack(10);
    //list.printData();
    list.insertDataAtBack(5);
    list.printData();
    list.insertDataAtBack(20);
    list.printData();
    list.insertDataAtBack(30);
    list.printData();
    list.insertDataSorted(40);
    list.printData();
    list.deleteDataAtBack();
    list.deleteDataAtBack();
    list.deleteDataAtBack();
    list.deleteDataAtBack();
    list.printData();
    //list.insertDataSorted(1);
   // list.printData();
   // list.deleteData(15);
    //list.printData();
    //list.deleteData(1);
    //list.deleteData(5);
    //list.deleteData(10);
    //list.deleteData(20);
    //list.deleteData(25);
    //list.deleteData(1);
    //list.printData();

    return 0;
}
 */