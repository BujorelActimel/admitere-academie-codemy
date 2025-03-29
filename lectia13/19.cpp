#include <iostream>
using namespace std;

int main() {
    int matrix[50][50] = { 0 };
int i = 0, j = 0, n=49;
for (i = 0; i < n; i++)
{
	matrix[i][i] = -1;
	matrix[i][n - i - 1] = 1;
}
int sum = 0;
for (i = 0; i < n; i++)
{
	for (j = 0; j < n; j++)
		sum += matrix[i][j];
}

    cout << sum << '\n';
    return 0;
}

// -1  0  0  0  1  
//  0 -1  0  1  0  
//  0  0  1  0  0
//  0  1  0 -1  0  
//  0  0  0  0  0


// n impar => suma = 1
// n par => suma = 


00 00 00 00 12 A7 9A