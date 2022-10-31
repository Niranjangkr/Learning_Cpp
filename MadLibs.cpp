#include <iostream>
using namespace std;

int main(){
    string color, pluralName, name;

    cout << "Enter color Plural name and you: "<<endl;
    getline(cin, color);
    getline(cin, pluralName);
    getline(cin, name);
    cout << "roses are " << color <<endl <<pluralName<< " are blue "<<endl <<"I love "<< name <<endl; 

    return 0;
}