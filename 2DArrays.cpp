#include <iostream>
using namespace std;

int main()
{
    int dim2[3][2] = {
        {0, 1},{2, 3},{4, 5}
    };

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            cout << dim2[i][j] << " "; 
        }
        cout << endl;
    }
    return 0;
}