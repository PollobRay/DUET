#include<iostream>
#include<fstream>
#include<string.h>
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
    void getbookdata()
    {
        cout<<"Enter Book Id, title and price of book";
        cin>>bookid;
        cin.ignore();
        cin.getline(title,19);
        cin>>price;
    }
    void showbookdata()
    {
        cout<<"\n"<<bookid<<"   "<<title<<"     "<<price;
    }
    int storebook()
    {
        ofstream fout;
        fout.open("File.txt",ios::app);
        fout.write((char*)this,sizeof(*this));
        fout.close();
        return 1;
    }
};
int main()
{
    Book b1,b2;
    b1.getbookdata();
    b1.showbookdata();
    b1.storebook();
    b2.showbookdata();
    b2.storebook();
    return 0;
}
