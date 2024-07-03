//
// Created by Ray on 1/2/2022.
//
/*
#include <iostream>
#include <algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;

class Node
{
private:
    int key;
    Node *left;
    Node *right;

public:
    void setKey(int key);
    void setLeft(Node *left);
    void setRight(Node *right);
    int getKey();
    Node* getLeft();
    Node* getRight();
};

void Node::setKey(int key)
{
    this->key=key;
}

void Node::setLeft(Node *left)
{
    this->left=left;
}

void Node::setRight(Node *right)
{
    this->right=right;
}

int Node::getKey()
{
    return key;
}

Node* Node::getLeft()
{
    return left;
}

Node* Node::getRight()
{
    return right;
}


class BinarySearchTree{
private:
    Node *tree;

public:
    BinarySearchTree():tree(NULL){}
    Node* insert(Node*,int key);
    Node* createNode(int key);
    bool  search(Node*,int Node);
    Node* searchInorderSuccessor(Node*);
    Node* deleteNode(Node*,int key);
    void inorderTraversal(Node*);
    void preorderTraversal(Node*);
    void postorderTraversal(Node*);
    void performOperation();
};

Node* BinarySearchTree::insert(Node *tree,int key)
{
    if(tree==NULL)
        return createNode(key);
    if(key<tree->getKey())
        tree->setLeft(insert(tree->getLeft(),key));
    else if(key>tree->getKey())
        tree->setRight(insert(tree->getRight(),key));

    return tree;
}

Node* BinarySearchTree::createNode(int key)
{
    Node *node=new Node();

    node->setKey(key);
    node->setLeft(NULL);
    node->setRight(NULL);

    return node;
}

bool BinarySearchTree::search(Node *tree, int key)
{
    if(tree==NULL)
        return false;

    if(tree->getKey()==key)
        return true;

    if(key<tree->getKey())
        return search(tree->getLeft(),key);
    else if(key>tree->getKey())
        return search(tree->getRight(),key);

    return false;
}

void BinarySearchTree::preorderTraversal(Node *tree)
{
    if(tree!=NULL)
    {
        cout<<tree->getKey()<<"  ";
        preorderTraversal(tree->getLeft());
        preorderTraversal(tree->getRight());
    }
}

void BinarySearchTree::inorderTraversal(Node *tree)
{
    if(tree!=NULL)
    {
        inorderTraversal(tree->getLeft());
        cout<<tree->getKey()<<" ";
        inorderTraversal(tree->getRight());
    }
}

void BinarySearchTree::postorderTraversal(Node *tree)
{
    if(tree!=NULL)
    {
        postorderTraversal(tree->getLeft());
        postorderTraversal(tree->getRight());
        cout<<tree->getKey()<<" ";
    }
}

Node* BinarySearchTree::searchInorderSuccessor(Node *tree)
{
    Node *node=tree;

    while(node!=NULL&&node->getLeft()!=NULL)
        node=node->getLeft();

    return node;
}

Node* BinarySearchTree::deleteNode(Node *tree, int key)
{
    if(tree==NULL)
        return NULL;

    if(key<tree->getKey())
        tree->setLeft(deleteNode(tree->getLeft(),key));
    else if(key>tree->getKey())
        tree->setRight(deleteNode(tree->getRight(),key));
    else
    {
        Node* temp;
        //if the node is with only one child or no child
        if(tree->getLeft()==NULL)
        {
            temp=tree->getRight();
            delete tree;
            return temp;
        }
        else if(tree->getRight()==NULL)
        {
            temp=tree->getLeft();
            delete tree;
            return temp;
        }
        else //if the node has two children
        {
            temp= searchInorderSuccessor(tree->getRight());
            tree->setKey(temp->getKey());

            //Delete the inorder successor
            tree->setRight(deleteNode(tree->getRight(),temp->getKey()));
        }
    }

    return tree;
}

void BinarySearchTree::performOperation()
{
    int start,end;
    int arr[50002]; //first declaring an array to store 50,000 values

    for (int i = 1; i <=50000; ++i) //to store only unique value into the array
    {
        arr[i-1]=i;
    }

    random_shuffle(arr,arr+50000); // to arrange data randomly not to sorting
    random_shuffle(arr,arr+50000); // to arrange data randomly not to sorting


    // to arrange data randomly not to sorting

    //to make the array 10 sub-array then sub array length = 50000/10 =5000
    start=0;
    end=5000;//50000/10
    for (int i = 1; i <=10 ; ++i) //indicate sub-array no
    {
        cout<<"For "<<i<<"\'th 5000 data set..."<<endl<<endl;
        //insertion time
        auto start_time = high_resolution_clock::now();

        for (int j = start; j <end ; ++j)
        {
            tree= insert(tree,arr[j]);
        }
        auto stop_time = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop_time - start_time);
        cout <<"insertion time : " <<duration.count()<<" Microseconds" << endl;


        //search time of an item that is in tree
        int key=arr[(start+end)/2];//middle value
        start_time = high_resolution_clock::now();
        if (search(tree,key))
            cout<<key<<" has found"<<endl;
        else
            cout<<key<<" Not found"<<endl;

        stop_time = high_resolution_clock::now();
        duration = duration_cast<microseconds>(stop_time - start_time);
        cout<<"search time of data "<<key<<" that is in Tree is :"<<duration.count()<<" Microseconds"<<endl;

        //search time of an item that is not in tree
        if(i==10)
            key=arr[start-10];
        else
            key=arr[end+10];

        start_time = high_resolution_clock::now();

        if (search(tree,key))
            cout<<key<<" has found"<<endl;
        else
            cout<<key<<"Not found"<<endl;

        stop_time = high_resolution_clock::now();
        duration = duration_cast<microseconds>(stop_time - start_time);
        cout<<"search time of data "<<key<<" that is not in Tree is :"<<duration.count()<<" Microseconds";

        cout<<endl<<endl<<endl;

        start=end; //start from end of previous sub-array's end
        end=end+5000;//set end to next 5000'th data

        delete tree;
        tree=NULL;// delete the tree
    }


}

int main()
{
    BinarySearchTree BST;
    BST.performOperation();

    return 0;
}
*/