// Copyright (c) Ray

//
// Created by Ray on 21-Jan-24.
//

#include <iostream>
#include<vector>
#include "algorithm.h"
using namespace std;

int grid[10][10];

struct GridNode
{
    int state;
    GridNode *parent;
    int action; // 2=  from down, 8=from up, 6= from right, 4= from left, 5=none
    int pathCost;// cost from root
};

void initializeGrid(int gridVal[10][10]) // initialize from by the value that provided from main function
{
    for (int i = 0; i <10 ; ++i)
    {
        for (int j = 0; j <10 ; ++j)
        {
            grid[i][j]=gridVal[i][j];
        }
    }
}

struct GridNode* initialState() //generate initial step
{
    struct GridNode* ptr=new struct GridNode();
    ptr->state=0;
    ptr->parent=NULL; // initial node has no parent
    ptr->action=5; // 5 means no action
    ptr->pathCost=0;

    return ptr;
}

bool isGoalState(struct GridNode *ptr) // check is it goal or not
{
    if(ptr->state==99) // goal node state is 99
        return true;

    return false;
}

int cost(struct GridNode *ptr)
{
    return ptr->pathCost;
}

vector<int> action(int vis[10][10], int state)
{
    int col,row;
    vector<int> action;

    col=state/10;
    row=state%10;

    if((col<9 && vis[row][col+1]==0) && grid[row][col+1]!=-1)
        action.push_back(6); // right
    if((col>0 && vis[row][col-1]==0) && grid[row][col-1]!=-1)
        action.push_back(4); // left
    if((row>0 && vis[row-1][col]==0) && grid[row-1][col]!=-1)
        action.push_back(8); // up
    if((row<9 && vis[row+1][col]==0) && grid[row+1][col]!=-1)
        action.push_back(2); //down

    return action;
}

struct GridNode* ChildState(struct GridNode* parent,int action)
{
    struct GridNode* ptr=new struct GridNode();

    int inc=0;  // indicated how much state value change from one move

    if(action==8)
        inc=parent->state-1; //up is -1 from current
    else if(action==2)
        inc=parent->state+1;  // down is +1 with current
    else if(action==6)
        inc=parent->state+10; // right is +10 with current
    else
        inc=parent->state-10; // left is -10 with current

    ptr->state=inc; // new node state value set
    ptr->parent=parent;
    ptr->action=action; // set which action is performed to generated that node from parent
    ptr->pathCost=0;
    ptr->pathCost=cost(parent)+1; // new node path cost is +1 with parent cost

    return ptr;
}

void printSolution(struct GridNode *sol) //sol is goal node
{
    if(sol==NULL) // when recursive brunch arriave initial's parent
    {
        cout<<"Solution Steps : ";  // after that node state will stat printing
        return;
    }

    printSolution(sol->parent);  // recusive first son that node can be print from initial node
    cout<<sol->state<<" "; // printing node state
}



