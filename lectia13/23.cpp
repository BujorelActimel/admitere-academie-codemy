#include <iostream>

using namespace std;

int mat[3][3] = { 
    {11,12,13}, 
    {41,54,61}, 
    {17,18,19} 
};

void my_func(){
	int i, j, aux, n = 3;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (i + j == n - 1) 
			{
				aux = mat[i][i];
				mat[i][i] = mat[i][n - i - 1];
				mat[i][n - i - 1] = aux;
			}		
}


int main() {
    my_func();
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << ' ';
        } 
        cout << '\n';
    }
}


// 32+128 = 160