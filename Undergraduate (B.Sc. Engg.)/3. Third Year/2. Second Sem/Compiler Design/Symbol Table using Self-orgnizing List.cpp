// Copyright (c) Ray

//
// Created by Ray on 14-Mar-23.
//
/*
#include <iostream>
using namespace std;

class Node
{
public:
    string name;
    string type;
    string value;
    Node *next;
    Node()
    {
        name="null";
        type=" ";
        value=" ";
        next= nullptr;
    }
};

bool isEqualSignExits(string s)
{
    for (int i = 0; i <s.size() ; ++i)
    {
        if(s.at(i)=='=')
            return true;
    }
    return false;
}

bool isComaExits(string s)
{
    for (int i = 0; i <s.size() ; ++i)
    {
        if(s.at(i)==',')
            return true;
    }
    return false;
}

void printList(Node *head)
{
    while(head!= nullptr)
    {
        cout<<head->name<<" -> ";
        head=head->next;
    }
    cout<<"null"<<endl;
}

int main()
{
    string str="int a, b;\nfloat c;\na=10;\nc=a*1.5/b;\n";

    string name=" ";
    string type=" ";
    string line=" ";

    Node *head= nullptr;

    string tempLine=" ";
    cout<<"Printing Program Lines"<<endl;
    for (int i = 0; i < str.size(); ++i)
    {
        if (str.at(i) == ';') {
            i++;
            cout<<tempLine<<endl;
            tempLine=" ";
        }
        else
        {
           tempLine.push_back(str.at(i));
        }

    }
    cout<<endl<<endl;
    cout<<"Self Sequencing List"<<endl;
    for (int i = 0; i < str.size(); ++i)
    {
        if(str.at(i)==';')
        {
            i++;
            //line complete
            cout<<line<<endl;

            if(isEqualSignExits(line))
            {
                string v2=" ";
                for(int l=1;l<line.size();l++)
                {
                    if (line.at(l)==' '|| line.at(l)=='=')
                        break;
                    v2.push_back(line.at(l));
                }
                Node *temp;
                Node *preTemp= nullptr;
                temp=head;

                Node *newNode=new Node();
                newNode->name=v2;

                while(temp!= nullptr)
                {
                    if(temp->name==v2)
                    {
                        if(temp==head)// first
                        {
                            //no need to do anything
                            break;
                        }
                        else if(temp->next== nullptr)//last
                        {
                            newNode->type=temp->type;
                            newNode->value="0";
                            preTemp->next= nullptr;
                            temp= nullptr;
                            newNode->next=head;
                            head=newNode;
                            break;
                        }
                        else //middle
                        {
                            newNode->type=temp->type;
                            newNode->value="0";
                            preTemp->next=temp->next;
                            temp= nullptr;
                            newNode->next=head;
                            head=newNode;
                            break;
                        }
                    }
                    preTemp=temp;
                    temp=temp->next;
                }

            }
            else
            {
                string vType=" ";
                int l=1;
                for(;l<line.size();l++)
                {
                    if(line.at(l)==' ')
                        break;
                    vType.push_back(line.at(l));
                }
                if(isComaExits(line))
                {
                    Node *newNode1=new Node();
                    Node *newNode2=new Node();
                    string v1=" ";
                    l++;
                    for(;l<line.size();l++)
                    {
                        if (line.at(l)==',')
                            break;
                        v1.push_back(line.at(l));
                    }
                    l++; // ,
                    l++; // ' '
                    string v2=" ";
                    for(;l<line.size();l++)
                    {
                        if (line.at(l)==',')
                            break;
                        v2.push_back(line.at(l));
                    }

                    newNode1->name=v1;
                    newNode1->value="0";
                    newNode1->type=vType;

                    newNode2->name=v2;
                    newNode2->value="0";
                    newNode2->type=vType;

                   //cout<<v1<<" + "<<v2<<" + "<<vType<<endl;

                    if(head==nullptr)
                    {
                        head=newNode2;
                        head->next=newNode1;
                    }
                    else
                    {
                        newNode1->next=head;
                        head=newNode2;
                        head->next=newNode1;
                    }

                }
                else
                {
                    Node *newNode=new Node();
                    string v1=" ";
                    l++;
                    for(;l<line.size();l++)
                    {
                        if (line.at(l)==' ')
                            break;
                        v1.push_back(line.at(l));
                    }
                    newNode->name=v1;
                    newNode->value="0";
                    newNode->type=vType;
                    newNode->next=head;
                    head=newNode;
                }
            }

            line=" ";

            printList(head);
        }
        else
        {
            line.push_back(str.at(i));
        }
    }
}

 */