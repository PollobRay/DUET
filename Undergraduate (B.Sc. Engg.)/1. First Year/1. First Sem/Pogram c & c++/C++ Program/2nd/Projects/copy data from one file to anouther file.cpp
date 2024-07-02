#include<iostream>
#include<fstream>
using namespace std;
void copyfile(char *f1,char *f2)
{
    ifstream fin;
    ofstream fout;
    char ch;
    fin.open(f1);
    fout.open(f2);
    ch=fin.get();
    while(!fin.eof())
    {
        fout<<ch;
        ch=fin.get();
    }
    fin.close();
    fout.close();

}
int main()
{

    copyfile("File.txt","File3.txt");
    cout<<"Copy complete";
    return 0;
}
