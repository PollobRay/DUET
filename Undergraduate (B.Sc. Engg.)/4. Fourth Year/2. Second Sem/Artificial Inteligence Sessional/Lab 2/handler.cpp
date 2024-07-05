// Copyright (c) Ray

//
// Created by Ray on 21-Jan-24.
//

/*
#include <iostream>
#include <set>
#include <iomanip>
#include "node.h"
#include "algorithm.h"

using namespace std;

int main()
{
    int input=1;

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

    initializeGrid(grid); // initialize grid

    cout<<"Printing the grid. -1 indicates obstacle"<<endl;
    for (int i = 0; i <10 ; ++i) {
        for (int j = 0; j <10 ; ++j) {
            cout<<setw(2)<<grid[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;

    do{
        cout<<"Enter any input to perform any operation"<<endl;
        cout<<"[1]: Apply DFS"<<endl;
        cout<<"[2]: Apply BFS(g)"<<endl;
        cout<<"[3]: Apply GBFS(h)"<<endl;
        cout<<"[4]: Apply A*(g+h)"<<endl;
        cout<<"[0]: Exit"<<endl;
        cout<<"Input :";
        cin>>input;

        switch(input)
        {
            case 1: {
                struct GridNode *dfsResult = dfs();
                cout << "Total Steps for DFS search : " << cost(dfsResult) << endl;
                printSolution(dfsResult);
                cout << endl;
                break;
            }

            case 2: {
                struct GridNode *bfsResult = bfs();
                cout << "Total Steps for BFS search : " << cost(bfsResult) << endl;
                printSolution(bfsResult);
                cout << endl;
                break;
            }
            case 3:
            {
                struct GridNode *gbfsResult=GBFS();
                cout<<"Total Steps for GBFS search : "<<cost(gbfsResult)<<endl;
                printSolution(gbfsResult);
                cout<<endl;
                break;
            }
            case 4:
            {

                struct GridNode *aPlusResult=AStar();
                cout<<"Total Steps for A* search : "<<cost(aPlusResult)<<endl;
                printSolution(aPlusResult);
                cout<<endl;
                break;
            }

        }
        cout<<endl<<endl;

    }while(input!=0);



    return 0;
}
*/