#include <stdio.h>
using namespace std;

int main() {
	int N = 4,i,sum=0;
	int A[][4] = { 	
                {10, 8, 6, 4}, 
				{11,13,15,17}, 
				{ 2, 4, 6, 8}, 
				{12,14,16,18}};
	
	for (i = 0; i < N; i++) {
		printf("%d %d ", A[i][i], A[N - i - 1][i]);
	}
    return 0;
}

// 10 12 13 4 6 15 18 4
