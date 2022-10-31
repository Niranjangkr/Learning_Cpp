#include<iostream>
using namespace std;
// program for 2d arrays and nested for loop
/* also for comments
thankyou*/
int main(){
    int nums[4][3];
    cout << "Enter numbers for 4 rows and 3 elements in each rows: "; 
    for (int i = 0; i < 4; i++ ){
        for (int j = 0; j < 3; j++){
            cin >> nums[i][j]; 
        }

    }
    
    cout << "result is : "<< endl;
    for (int i = 0; i < 4; i++ ){
        for (int j = 0; j < 3; j++){
            cout << nums[i][j] << " "; 
        }
        cout << endl;
    }


    return 0;
}