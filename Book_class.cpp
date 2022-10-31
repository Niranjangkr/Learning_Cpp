#include<iostream>
using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;
        double price;
        Book(string tname, string tauthor, int tpage){
            title = tname;
            author = tauthor;
            pages = tpage;
        }
        void showDetails(){
            cout << "Book title: "<< title << endl;
            cout << "Author: "<< author << endl;
            cout << "Pages: "<< pages << endl;
            cout << "Price: "<< price << endl;
        }
};

int main()
{
    Book b1("Harry Potter", "J.K Rowlling", 540);
    b1.price = 723.00;
    b1.showDetails();
    return 0;
}