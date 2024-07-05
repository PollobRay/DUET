// Copyright (c) Ray

//
// Created by Ray on 20-Jan-24.
//


/*
#include <iostream>
#include<vector>
#include <stack>
#include <queue>
using namespace std;

int grid[10][10]={ //0 means obstacle
        {0, 10,-1,30,-1,50,-1,70,80,90},
        {-1,11,-1,31,41,51,-1,71,-1,91},
        {2, 12,22,32,-1,52,-1,72,-1,92},
        {3, 13,-1,-1,-1,53,-1,73,-1,93},
        {-1,14,-1,34,-1,54,-1,74,-1,94},
        {-1,15,-1,35,-1,55,-1,75,-1,95},
        {-1,16,26,36,-1,56,66,76,-1,96},
        {-1,17,-1,37,-1,57,67,77,-1,97},
        {8, 18,-1,38,-1,58,68,78,-1,98},
        {9, 19,-1,39,-1,59,69,79,-1,99}
};

struct Node
{
    int state;
    Node *parent;
    int action; // 2=  from down, 8=from up, 6= from right, 4= from left, 5=none
    int pathCost;// cost from root
};

struct Node* initialState()
{
    struct Node* ptr=new struct Node();
    ptr->state=0;
    ptr->parent=NULL;
    ptr->action=5;
    ptr->pathCost=0;

    return ptr;
}

bool isGoalState(struct Node *ptr)
{
    if(ptr->state==99)
        return true;

    return false;
}

int cost(struct Node *ptr)
{
    return ptr->pathCost;
}

vector<int> action(int vis[10][10], int state)
{
    int col,row;
    vector<int> action;

    col=state/10;
    row=state%10;

    if((col<9 && vis[row][col+1]!=1) && grid[row][col+1]!=-1)
        action.push_back(6); // right
    if((col>0 && vis[row][col-1]!=1) && grid[row][col-1]!=-1)
        action.push_back(4); // left
    if((row>0 && vis[row-1][col]!=1) && grid[row-1][col]!=-1)
        action.push_back(8); // up
    if((row<9 && vis[row+1][col]!=1) && grid[row+1][col]!=-1)
        action.push_back(2); //down

    return action;
}

struct Node* ChildState(struct Node* parent,int action)
{
    struct Node* ptr=new struct Node();
    int inc=0;

    if(action==8)
        inc=parent->state-1;
    else if(action==2)
        inc=parent->state+1;
    else if(action==6)
        inc=parent->state+10;
    else
        inc=parent->state-10;

    ptr->state=inc;
    ptr->parent=parent;
    ptr->action=action;
    ptr->pathCost=cost(parent)+1;

    return ptr;
}

struct Node* dfs()
{
    int vis[10][10];

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            vis[i][j]=0;
        }
    }

    stack<Node*> stack;

    struct Node* initial=initialState();
    stack.push(initial);

    while (!stack.empty()) {
        Node *currentNode = stack.top();
        stack.pop();

        int row,col;
        col=currentNode->state/10;
        row=currentNode->state%10;

        vis[row][col]=1;
        if (isGoalState(currentNode)) {
            return currentNode;
        }

        for (int i: action(vis, currentNode->state)) {
            struct Node* child=ChildState(currentNode, i);
            stack.push(child);
        }
    }
    return NULL;
}

struct Node* bfs()
{
    int vis[10][10];

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            vis[i][j]=0;
        }
    }

    queue <Node*> queue;
    struct Node* initial=initialState();
    queue.push(initial);

    while (!queue.empty()) {
        Node *currentNode = queue.front();
        queue.pop();

        int row,col;
        col=currentNode->state/10;
        row=currentNode->state%10;

        vis[row][col]=1;
        if (isGoalState(currentNode)) {
            return currentNode;
        }

        for (int i: action(vis, currentNode->state)) {
            struct Node* child=ChildState(currentNode, i);
            queue.push(child);
        }
    }
    return NULL;
}
void printSolution(struct Node *sol)
{
    if(sol==NULL)
    {
        cout<<"Solution Steps : ";
        return;
    }

    printSolution(sol->parent);
    cout<<sol->state<<" ";
}

int main()
{
    struct Node *dfsResult=dfs();
    cout<<"Total Steps for DFS search : "<<cost(dfsResult)<<endl;
    printSolution(dfsResult);
    cout<<endl;

    struct Node *bfsResult=bfs();

    cout<<"Total Steps for BFS search : "<<cost(bfsResult)<<endl;
    printSolution(bfsResult);
    cout<<endl;

    return 0;
}*/
