    #include<iostream>
    using namespace std;
    int main()
    {
int b[5],d=10,e=20,f=30;
int c=0;
b[0]=d;
b[1]=e;
b[2]=f;
for (int a=0;a<3;a++)
{
    cout<<b[a]<<"\n";
    c=c+b[a];
}
cout<<"\n\n Summation :"<<c;
    }
