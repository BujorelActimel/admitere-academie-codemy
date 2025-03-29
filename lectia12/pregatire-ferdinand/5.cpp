#include <stdio.h>
#define N 5

void afis(int a[N][N]) {
    int i, j;
    for(i=0 ;i<N;i++) {
        for(j=0;j<N;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main() {
    int a[N][N] = {0}, i, j;

    // v1
    for(i=0 ;i<N;i++)
        for(j=0;j<N;j++)
            a[i][j] = (i*j)%N; 
    
    afis(a);

    // v2
    for(i=0 ;i<N;i++)
        for(j=0;j<N;j++)
            a[i][j] = (i+j)%N; 

    afis(a);

    // v3
    for(i=0 ;i<N;i++)
        for(j=0;j<N;j++)
            a[i][j] = (i+j)%(N+1);  		    

    afis(a);

    // v4
    for(i=0 ;i<N;i++)
        for(j=0;j<N;j++)
            a[i][j] = (i*j)%(N+1); 

    afis(a);
    return 0;
}