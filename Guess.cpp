#include<iostream>
using namespace std;

int main()
{
    int luckyNo = 7;
    int count = 0;
    int limit = 3; 
    int guess;
    while (guess != luckyNo && count < limit){
        cout << "Guess the number: ";
        cin >> guess;
        count++;
    }
    if (luckyNo == guess){
        cout << "You win\n";
    }else{
        cout << "You loose\n";
    }
    return 0;
}