#include<iostream>
using namespace std;

int cube(int n){
    return n*n*n;
}

int main(){
    cout << "Enter a number : "<< endl;
    int num;
    cin >> num; 
    cout << "The cube of "<< num << " is " <<cube(num) << endl;
    return 0;
}