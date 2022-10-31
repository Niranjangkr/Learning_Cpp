#include <iostream>

using namespace std;

int greaterThan(int a, int b, int c){
    if (a >= b && a >= c){
        return a;
    }else if(b >= a && b >= c){
        return b;
    }else{
        return c;
    }
}

int main()
{
    int a, b, c;
    string name;
    cout << "Enter your name & Three numbers: "<< endl;
    getline(cin, name);
    cin >> a;
    cin >> b;
    cin >> c;
    // fflush(stdin); //this command is used to clean the buffer in c 
    cout <<"Hello " << name << endl;
    cout << "Answer is : "<< greaterThan(a, b, c);



    return 0 ;
}