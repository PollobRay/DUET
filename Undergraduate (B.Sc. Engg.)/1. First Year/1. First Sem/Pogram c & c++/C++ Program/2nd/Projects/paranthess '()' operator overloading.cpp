#include<iostream>
using namespace std;
class matrix
{
private:
    int a[3][3];
public:
    int &operator()(int i,int j)
    {
        return(a[i][j]);
    }
    void printmatrix()
    {
        int i,j;
        for(i=0;i<=2;i++)
        {
            for(j=1;j<=2;j++)
                cout<<a[i][j]<<"      ";
            cout<<"\n";
        }
    }
};
int main()
{
    matrix m;
    m(0,0)=3;
    m(0,1)=4;
    m(0,2)=5;
    m(1,0)=6;
    m(1,1)=7;
    m(1,2)=8;
    m(2,0)=9;
    m(2,1)=10;
    m(2,2)=11;
    m.printmatrix();
}
