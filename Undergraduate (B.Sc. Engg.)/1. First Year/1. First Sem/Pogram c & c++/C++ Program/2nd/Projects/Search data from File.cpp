#include<iostream>
#include<fstream>
#include<String.h>
using namespace std;
class Book
{
    private:
    int bookid;
    char title[20];
    float price;
public:
    Book()
    {
        bookid=0;
        strcpy(title,"no title");
        price=0;
    }
     void showbookdata()
    {
        cout<<"\n"<<bookid<<"   "<<title<<"     "<<price;
    }
    void searchbook(char*);
};
void Book::searchbook(char *t)
{
    ifstream fin;
    fin.open("File.txt",ios::in|ios::binary);
    if(!fin)
        cout<<"File not Found";
    else
    {
        fin.read((char*)this,sizeof(*this));
       while(!fin.eof())
       {
           if(!strcmp(t,title))
            showbookdata();
           fin.read((char*)this,sizeof(*this));
       }
       fin.close();
    }
}
int main()
{
    Book b1;
    b1.searchbook("PHP");
    return 0;
}
