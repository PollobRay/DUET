//
// Created by Ray on 1/9/2022.
//

//
// Created by Ray on 1/9/2022.
//

/*
#include <iostream>
#include<algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;

struct node {
    int key;
    struct node *left, *right;
};


struct node *newNode(int item) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}


struct node *insert(struct node *tree, int key) {

    if (tree == NULL)
        return newNode(key);

    if (key < tree->key)
        tree->left = insert(tree->left, key);
    else
        tree->right = insert(tree->right, key);

    return tree;
}


int main() {
    struct node *tree = NULL;
    srand((unsigned) time(0));

    auto begin = high_resolution_clock::now();

    for (int i = 1; i <=50000; ++i)
    {
        tree= insert(tree,(rand()%5000)+1);
    }

    auto end =high_resolution_clock::now();
    auto time=duration_cast<microseconds>(end - begin);
    cout<<"Insert time : "<<time.count()<<endl;

}*/
