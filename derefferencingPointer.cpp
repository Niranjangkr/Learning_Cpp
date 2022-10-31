#include<iostream>
using namespace std;

int main()
{
    int a = 309;
    int* p = &a;
    cout << p <<endl;
    cout << *p << endl;
    cout << &*p << endl;
    cout << *&*p << endl;
    return 0;
}