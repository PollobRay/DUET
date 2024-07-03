//
// Created by pollo on 4/8/2021.
//
/*
#include <iostream>
using namespace std;

class Matrix
{
private:
    int size=3;// square matrix of size 3
    int mat[3][3];



public:
    //Matrix();
    Matrix(int ar[][3])
    {
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                mat[i][j]=ar[i][j];
            }
        }
    }
    Matrix add(const Matrix& mat);
    friend Matrix add(const Matrix& m1,const Matrix& m2);
    void print();
};

Matrix Matrix::add(const Matrix &mat1)
{
    Matrix m({0});
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
           m.mat[i][j]= mat[i][j]+mat1.mat[i][j];
        }
    }

    return m;
}
Matrix add(const Matrix& m1,const Matrix& m2)
{
    Matrix m({0});
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            m.mat[i][j]=m1.mat[i][j]+m2.mat[i][j];
        }
    }

    return m;
}

void Matrix::print()
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int ar1[3][3],ar2[3][3];

    cout<<"Enter 1st 3x3 matrix value"<<endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin>>ar1[i][j];
        }
    }
    cout<<"Enter 2nd 3x3 matrix value"<<endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin>>ar2[i][j];
        }
    }

    Matrix m1(ar1),m2(ar2);


    cout<<"By Friend function: "<<endl;
    add(m1,m2).print();

    cout<<"By member function : "<<endl;
    m1.add(m2).print();

    return 0;
}
*/