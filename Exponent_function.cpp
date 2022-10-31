#include<iostream>
using namespace std;

int Exponent(int num, int pow){
    int ans = 1;
    for (int i = 0; i < pow; i++){
        ans = ans * num;
    }
    return ans;
} 

int main(){
    int num, pow;
    cout << "Enter Number and its power: ";
    cin >> num;
    cin >> pow;
    cout << "Answer is: "<< Exponent(num, pow);

    return 0;
}