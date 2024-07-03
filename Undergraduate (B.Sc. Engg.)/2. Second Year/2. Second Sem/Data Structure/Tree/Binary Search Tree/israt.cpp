//
// Created by Ray on 1/2/2022.
//
/*
#include<bits/stdc++.h>
using namespace std;
struct Btree
{
    int data;
    struct Btree *left;
    struct Btree *right;
};
typedef struct Btree Node;
Node *node;
Node* create(Node*node,int data)
{
    if (node == NULL)
    {
        Node*temp;
        temp= (Node*)malloc(sizeof(Node));
        temp->data=data;
        temp->left=temp->right=NULL;
        return temp;
    }
    if (data<(node->data))
    {
        node->left=create(node->left,data);
    }
    else if (data>node->data)
    {
        node->right=create(node->right,data);
    }
    return node;
}
Node* search(Node *node,int data)
{
    if(node == NULL)
        cout<<"\nElement not found";
    else if(data<node->data)
    {
        node->left=search(node->left,data);
    }
    else if(data>node->data)
    {
        node->right=search(node->right,data);
    }
    else

        cout<<"\nElement found is:"<<node->data;
    return node;
}
void inorder(Node*node)
{
    if(node!=NULL)
    {
        inorder(node->left);
        cout<<"\t"<<node->data;
        inorder(node->right);
    }
}
void preorder(Node *node)
{
    if(node!=NULL)
    {
        cout<<"\t"<<node->data;

        preorder(node->left);

        preorder(node->right);
    }
}
void postorder(Node *node)
{
    if(node != NULL)
    {
        postorder(node->left);
        postorder(node->right);
        cout<<"t"<<node->data;
    }
}
Node* findMin(Node *node)
{
    if(node==NULL)
    {
        return NULL;
    }
    if(node->left)
        return findMin(node->left);
    else
        return node;
}
Node* del(Node *node, int data)
{
    Node *temp;
    if(node == NULL)
    {
        cout<<"\nElement not found";
    }
    else if(data < node->data)
    {
        node->left = del(node->left,data);
    }
    else if(data>node->data)
    {
        node->right = del(node->right,data);
    }
    else
    {
        if(node->right && node->left)
        {
            temp = findMin(node->right);
            node -> data = temp->data;
            node -> right = del(node->right,temp->data);
        }
        else
        {
            temp = node;
            if(node->left == NULL)
                node = node->right;
            else if(node->right == NULL)
                node = node->left;
            free(temp);
        }
    }
    return node;
}
int main()
{
    int value, option, n;
    Node *root=NULL;
    while (1)
    {
        cout<<"\n1.Insertion()";
        cout<<"\n2.Search()";
        cout<<"\n3.Delete()";
        cout<<"\n4.traversal()";
        cout<<"\n7.Exit()";
        cout<<"\nEnter your choice: "<<endl;
        cin>>option;
        switch (option)
        {
            case 1:
                cout<<"\nEnter n value: "<<endl;
                cin>>n;
                cout<<"\nEnter the values to create:"<<endl;

                for(int i=0; i<n; i++){
                    cin>>value;
                    root=create(root,value);
                }
                break;
            case 2:
                cout<<"\nEnter the element to search: "<<endl;

                cin>>value;

                root=search(root,value);

                break;

            case 3:
                cout<<"\nEnter the element to delete: "<<endl;

                cin>>value;

                root=del(root,value);

                break;

            case 4:
                int o;
                cout<<"\nTraversal: \n"<<endl;
                cout<<" 1 for inorder\n"<<endl;
                cout<<" 2 for preorder\n"<<endl;
                cout<<" 3 for postorder\n"<<endl;
                cin>>o;
                if(o==1)
                    inorder(root);
                else if(o==2)
                    preorder(root);
                else if(o==3)
                    postorder(root);

                break;


            case 7:
                exit(0);

            default:
                cout<<"\nEnter the proper option number:"<<endl;

                break;

        }

    }

}
 */
