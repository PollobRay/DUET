//
// Created by Ray on 12/24/2021.
//
/*
#include <iostream>
using namespace std;

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
    Node*  search(Node*,int Node);
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

Node* BinarySearchTree::search(Node *tree, int key)
{
    if(tree->getKey()==key)
        return tree;

    if(key<tree->getKey())
        return search(tree->getLeft(),key);
    else if(key>tree->getKey())
        return search(tree->getRight(),key);

    return NULL;
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
    int choice;
    int item;

    do{
        cout<<endl<<"Enter choice "<<endl;
        cout<<"[1]: Insert Element"<<endl;
        cout<<"[2]: Delete Element"<<endl;
        cout<<"[3]: Search Element"<<endl;
        cout<<"[4]: Pre-Order Traversal"<<endl;
        cout<<"[5]: In-Order Traversal"<<endl;
        cout<<"[6]: Post-Order Traversal"<<endl;
        cout<<"[0]: Exit"<<endl<<endl;

        cout<<"Enter choice :";
        cin>>choice;

        switch (choice)
        {
            case 0:
                cout<<"\nTerminating Program....."<<endl;
                break;

            case 1:
                cout<<"\nEnter a data to insert :";
                cin>>item;

                tree= insert(tree,item);

                cout<<"Data Successfully Inserted"<<endl;
                break;

            case 2:
                cout<<endl<<"Enter a data to delete :";
                cin>>item;
                if (deleteNode(tree,item)!=NULL)
                    cout<<item<<" successfully deleted"<<endl;
                else
                    cout<<"Data not exits"<<endl;

                break;

            case 3:
                cout<<endl<<"Enter a data to search :";
                cin>>item;

                if (search(tree,item)!=NULL)
                    cout<<item<<" has found"<<endl;
                else
                    cout<<"Not found"<<endl;

                break;

            case 4:
                cout<<endl<<"Preorder Traversal"<<endl;
                preorderTraversal(tree);
                break;

            case 5:
                cout<<endl<<"Inorder Traversal"<<endl;
                inorderTraversal(tree);
                break;

            case 6:
                cout<<endl<<"Postorder Traversal"<<endl;
                postorderTraversal(tree);
                break;

            default:
                cout<<"Enter valid choice"<<endl;
        }

    }while(choice!=0);
}

int main()
{

    BinarySearchTree BST;

    BST.performOperation();

    return 0;
}
*/