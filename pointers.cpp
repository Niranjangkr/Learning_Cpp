#include<iostream>
using namespace std;

int main(){
    int var1 = 30;
    int* a = &var1;

    cout << "var1 address in a is " << a << " var1 address using & is "<<&var1;
    //changing value in var1 using a and displaying it
    cout << "value in var1 : "<< var1 << endl;
    *a = 40;
    cout << "value in var1 now is "<< var1 << endl;


    
    return 0;
}