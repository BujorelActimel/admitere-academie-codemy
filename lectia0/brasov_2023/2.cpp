// 2. Variabilele k și i sunt de tip întreg. 
// Indicați câte valori distincte se vor afla pe coloana a 3-a a tabloului bidimensional
// pătratic A cu componente de tip întreg, având cel 
// mult 10 linii și 10 coloane, dacă se citește valoarea 5. (indexarea este de
// la 1)
// cin>>n;
// for(k=(n+1)/2;k>=1;--k)
// for(i=1;i<=n;++i)
//  A[i][k] = A[i][n-k+1]=k, A[k][i] = A[n-k+1][i]=k;
//  a. 4
//  b. 2
//  c. 5
//  d. 3

// n = 5

// a11 a12 a13 a14 a15
// a21 a22 a23 a24 a25
// a31 a32 a33 a34 a35
// a41 a42 a43 a44 a45
// a51 a52 a53 a54 a55

// for(k=(n+1)/2;k>=1;--k) k de la 3 pana la 1
//     for(i=1;i<=n;++i) i de la 1 la 5
//         A[i][k] = A[i][n-k+1] = k, 
//         A[k][i] = A[n-k+1][i] = k;


// a[2][1] = a[2][5-1+1] = a[2][5]
// a[2][2] = a[2][5-2+1] = a[2][4]

// a[1][3] = a[1][5-3+1] = a[1][3] = k = 3
// a[2][3] = 3
// a[3][3] = 3
// a[4][3] = 3

// a[1][3] = a[1][3] = 3

#include <iostream>
using namespace std;

int main() {

    int a[10][10];
    int n;
    cin >> n;
    int i, k;
    
    for(k=(n+1)/2;k>=1;--k) { //k de la 3 pana la 1
        for(i=1;i<=n;++i) {//i de la 1 la 5
            cout << "s-a pus valoarea " << k << " pe pozitia " << i << ' ' << k << '\n'; 
            a[i][k] = a[i][n-k+1] = k;
            a[k][i] = a[n-k+1][i] = k;
        }
    }


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}