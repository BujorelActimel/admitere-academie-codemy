#include <iostream>

using namespace std;

int main() {
    int i, j, m[3][3]={
        {4,1,8},
        {2,9,5},
        {7,3,6} 
    };
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            if (i % 2)
                ++m[i][j];
            if (!(j % 2))
                m[i][j] /= 2;
        }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
        {
            cout << m[i][j] << ' ';
        }
        cout << '\n';
    }
}


// {2,1,4},
//     {1,10,3},
//     {3,3,3} 