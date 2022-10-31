#include<iostream>
using namespace std;

int main()
{
    cout << "Enter num1: ";
    int num1;
    cin >> num1;
    cout << "Choose operator";
    char op;
    cin >> op;
    cout << "Enter num2: ";
    int num2;
    cout << "\n";
    cin >> num2;
    
    if (op == '+'){
        cout << num1 + num2;
    }else if(op == '-'){
        cout << num1 - num2;
    }else if(op == '*'){
        cout << num1 * num2;
    }else if(op == '/'){
        cout << num1 / num2;
    }else{
        cout << "Invalid operator" << endl;
    }

    return 0;
}