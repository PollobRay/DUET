// Copyright (c) Ray

//
// Created by Ray on 21-Jan-24.
//
#include <iostream>
#include <queue>
#include <stack>
#include <set>
#include <deque>
#include "node.h"
using namespace std;

struct GridNode* dfs()
{
    int vis[10][10];

    for(int i=0;i<10;i++) //make not visited to all node
    {
        for(int j=0;j<10;j++)
        {
            vis[i][j]=0;
        }
    }
    stack<GridNode*> stack; // stack for dfs

    struct GridNode* initial=initialState(); //initial node or first node
    stack.push(initial); // push to stack

    int nodeExpand=0;
    int maxNodeOnQueue=0;

    while (!stack.empty()) { //until stack is empty
        GridNode *currentNode = stack.top(); //getting top value of stack

        if(maxNodeOnQueue<stack.size()) //checking stack is max of value or not
        {
            maxNodeOnQueue=stack.size();
        }

        stack.pop();// removing first item from stack

        nodeExpand++; // one node is expanded already

        int row,col; // getting column and row
        col=currentNode->state/10;// extract column no
        row=currentNode->state%10; //extract row no

        vis[row][col]=1; //making that node is visited
        if (isGoalState(currentNode)) { // when goal node is found
            cout<<"Result of DFS Algorithm"<<endl;
            cout<<"Total Node Expanded : "<<nodeExpand<<endl;
            cout<<"Max Node on Queue : "<<maxNodeOnQueue<<endl;
            return currentNode; // return goal node
        }

        for (int i: action(vis, currentNode->state)) // expanded child node
        {
            struct GridNode* child=ChildState(currentNode, i);
            stack.push(child);
        }
    }

    return NULL; // when goal is not found
}

struct GridNode* bfs()
{
    int vis[10][10];

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            vis[i][j]=0;
        }
    }

    queue <GridNode*> queue; // it is BFS so queue is used
    struct GridNode* initial=initialState();
    queue.push(initial);

    int nodeExpand=0;
    int maxNodeOnQueue=0;

    while (!queue.empty()) {
        GridNode *currentNode = queue.front();
        if(maxNodeOnQueue<queue.size())
        {
            maxNodeOnQueue=queue.size();
        }
        queue.pop();
        nodeExpand++;

        int row,col;
        col=currentNode->state/10;
        row=currentNode->state%10;

        vis[row][col]=1;
        if (isGoalState(currentNode)) {
            cout<<"Result of BFS Algorithm"<<endl;
            cout<<"Total Node Expanded : "<<nodeExpand<<endl;
            cout<<"Max Node on Queue : "<<maxNodeOnQueue<<endl;
            return currentNode;
        }

        for (int i: action(vis, currentNode->state)) {
            struct GridNode* child=ChildState(currentNode, i);
            queue.push(child);
        }
    }
    return NULL;
}

struct GridNode* GBFS() //Greedy Best First Search
{
    int vis[10][10];
    //initialize visited array to 0 that indicated not visited
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            vis[i][j]=0;
        }
    }
    int nodeExpand=0;
    int maxNodeOnQueue=0;

    //sort in ascending order using value of 'h'
    struct sortSet { // to sort node by default on set using value of 'h' in ascending order
        bool operator()(struct GridNode* n1, struct GridNode* n2) const {
            int col1,row1,col2,row2;

            col1=n1->state/10;
            row1=n1->state%10;
            col2=n2->state/10;
            row2=n2->state%10;

            int h1=(9-col1)+(9-row1);
            int h2=(9-col2)+(9-row2);
            // Customize the sorting order here
            if(h1<h2)// calculating value of h
                return true;
            return false;
        }
    };
    set<struct GridNode*, sortSet> setQueue;// a set that hold node and sort node using value of 'h' while inserting
    set<struct GridNode*, sortSet>::iterator itr; // iterator for  accessing and deleting value from set

    struct GridNode* initial=initialState();
    setQueue.insert(initial); //insert initial node


    while (!setQueue.empty()) {
        itr=setQueue.begin(); //get first value
        GridNode *currentNode = *itr; // getting set first item

        if(maxNodeOnQueue<setQueue.size())
        {
            maxNodeOnQueue=setQueue.size();
        }

        setQueue.erase(itr); // delete first value
        nodeExpand++;

        int row,col;
        col=currentNode->state/10;
        row=currentNode->state%10;

        vis[row][col]=1;
        if (isGoalState(currentNode)) {
            cout<<"Result of GBFS Algorithm"<<endl;
            cout<<"Total Node Expanded : "<<nodeExpand<<endl;
            cout<<"Max Node on Queue : "<<maxNodeOnQueue<<endl;
            return currentNode;
        }

        for (int i: action(vis, currentNode->state)) {
            struct GridNode* child=ChildState(currentNode, i);
            setQueue.insert(child);
        }
    }
    return NULL;
}

//A* Search sorting strategy
bool compareF(struct GridNode *n1, struct GridNode *n2) //to sort node with f value
{
    int col1,row1,col2,row2;
    //row column calculation
    col1=n1->state/10;
    row1=n1->state%10;
    col2=n2->state/10;
    row2=n2->state%10;

    //heuristic value calculation
    int g1=n1->pathCost;
    int g2=n2->pathCost;
    int h1=(9-col1)+(9-row1);
    int h2=(9-col2)+(9-row2);
    int f1=g1+h1;
    int f2=g2+h2;

    return (f1<=f2); //sort in ascending order
}

struct GridNode* AStar()
{
    int vis[10][10];
    //initialize visited array to 0 that indicated not visited
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            vis[i][j]=0;
        }
    }

    int nodeExpand=0;
    int maxNodeOnQueue=0;

    deque<struct GridNode*> sQueue; // a queue that hold a node which has minimum 'f' value at first

    struct GridNode* initial=initialState();
    sQueue.push_back(initial); //insert initial node

    while (!sQueue.empty()) {

        struct GridNode *currentNode = sQueue.front();

        if(maxNodeOnQueue<sQueue.size())
        {
            maxNodeOnQueue=sQueue.size();
        }
        sQueue.pop_front();
        nodeExpand++;

        int row,col;
        col=currentNode->state/10;
        row=currentNode->state%10;

        vis[row][col]=1; //make visible
        if (isGoalState(currentNode)) { //if goal state is found
            cout<<"Result of A* Search Algorithm"<<endl;
            cout<<"Total Node Expanded : "<<nodeExpand<<endl;
            cout<<"Max Node on Queue : "<<maxNodeOnQueue<<endl;
            return currentNode;
        }
        //child node expand
        for (int i: action(vis, currentNode->state)) {
            struct GridNode* child=ChildState(currentNode, i);
            sQueue.push_back(child);
        }
        sort(sQueue.begin(),sQueue.end(), compareF); //sort node with 'f' value

    }
    return NULL;
}

