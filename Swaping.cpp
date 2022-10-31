#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 10, b = 20;
    cout <<"value in a = " << a <<"\nvalue in b = " << b << endl;
    swap(&a, &b);
    cout << "After Swapping"<< endl;
    cout << "value in a = " << a <<"\nvalue in b = " << b << endl;
    return 0;
}