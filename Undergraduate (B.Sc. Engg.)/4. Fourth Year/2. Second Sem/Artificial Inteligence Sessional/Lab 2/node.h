// Copyright (c) Ray

//
// Created by Ray on 21-Jan-24.
//
#include <vector>
using namespace std;
#ifndef PROBLEM_SOLVING_1_NODE_H
#define PROBLEM_SOLVING_1_NODE_H
struct GridNode
{
    int state;
    GridNode *parent;
    int action; // 2=  from down, 8=from up, 6= from right, 4= from left, 5=none
    int pathCost;// cost from root
};
bool isVisitedNode(struct GridNode *ptr,int state);
void initializeGrid(int gridVal[10][10]);
struct GridNode* initialState();
bool isGoalState(struct GridNode *ptr);
int cost(struct GridNode *ptr);
vector<int> action(int vis[10][10], int state);
vector<int> actionRec(struct GridNode* node);
struct GridNode* ChildState(struct GridNode* parent,int action);
void printSolution(struct GridNode *sol);
#endif //PROBLEM_SOLVING_1_NODE_H


