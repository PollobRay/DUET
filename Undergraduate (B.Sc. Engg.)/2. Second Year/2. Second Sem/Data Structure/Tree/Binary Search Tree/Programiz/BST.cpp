//
// Created by Ray on 12/18/2021.
//
/*
#include<iostream>
using namespace std;

struct Node
{
    int key;
    struct Node *left;
    struct  Node *right;
};

//create node
struct Node *createNode(int item)
{
    struct Node *node=(struct Node*) malloc(sizeof(struct Node));

    node->key=item;
    node->left=NULL;
    node->right=NULL;

    return node;
}

void inorder(struct Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);

        cout<<root->key<<" ";

        inorder(root->right);
    }
}

struct Node *insert(struct Node* node,int key)
{
    if(node==NULL)
        return createNode(key);

    if(key<node->key)
        node->left= insert(node->left,key);
    else
        node->right= insert(node->right,key);

    return node;
}

struct Node* minValueNode(struct Node* node)
{
    struct Node *current=node;

    while(current && current->left!=NULL)
        current=current->left;
    return current;
}

struct Node *deleteNode(struct Node *root,int key)
{
    if(root==NULL)
        return root;

    if(key<root->key)
        root->left= deleteNode(root->left,key);
    else if(key>root->key)
        root->right= deleteNode(root->right,key);
    else
    {
        if(root->left==NULL)
        {
            struct Node *temp=root->right;
            free(root);

            return temp;
        }
        else if(root->right==NULL)
        {
            struct Node *temp=root->left;
            free(root);

            return temp;
        }

        struct Node *temp= minValueNode(root->right);

        root->key=temp->key;

        root->right= deleteNode(root->right,temp->key);
    }
    return root;
}

int main()
{
    struct Node *tree=NULL;

    tree=insert(tree,8);
    tree=insert(tree,3);
    tree=insert(tree,1);
    tree=insert(tree,6);
    tree=insert(tree,7);
    tree=insert(tree,10);
    tree=insert(tree,14);
    tree=insert(tree,4);
    tree=insert(tree,5);

    inorder(tree);

    cout<<endl;

    tree= deleteNode(tree,10);

    inorder(tree);

    return 0;
}
*/