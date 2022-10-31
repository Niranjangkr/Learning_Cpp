#include<iostream>
using namespace std;


int main()
{
    int a, b;
    string name;
    cout << "Enter values for a and b \n";
    cin >> a >> b;
    cout <<flush;
    char ch; cout<< "enter character: ";cin >> ch;
    getline(cin, name);
    cout << "Name is "<< name << endl;
    cout << "value of a = "<< a << "\nvalue of b = "<<b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "\nAfter operations\n";
    cout << "value of a = "<< a << "\nvalue of b = "<<b;

    return 0;
}