#include <stdio.h>
using namespace std;

int main() {
    int N = 5;
    int nr_buc[] =  {10, 5, 1, 1, 3};
    int preturi[] = {20, 3, 10, 100, 1};

    int total=0;

    for(int i = 0; i < N; i++)
        total += nr_buc[i] * preturi[i];

    printf("%d\n", total);

    return 0;
}

// 10 12 13 4 6 15 18 4
