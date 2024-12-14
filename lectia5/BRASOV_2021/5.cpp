i: 1->7

j: 1->n-2-i

i = 2, j: 1->5



1 2 3 4 5 8 8 8 8
1 2 3 4 5 0 0 0 0
1 2 3 4 0 0 0 0 0
1 2 3 0 0 0 0 0 0
1 2 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0

n = 9

întreg n,i,j,a[50][50]
 citește n
 a[1][n] n-1
 a[1][n-1] n-1
pentru i1,n-2,1 execută
 pentru j1,n-2-i,1 execută
 a[i][j] j
 sfârșitpentru
 sfârșitpentru
 pentru i1,n-2,1 execută
 pentru jn-2-i,n-i,1 execută
 a[i][j]=n-1
 pentru i2,n,1 execută
 pentru jn-i+1,n-1,1 execută
 a[i][j] n
 sfârșitpentru
 sfârșitpentru
a[n][1] n-1
a[n][2] n-1


pentru i1,n-2,1 execută
 pentru jn-2-i,n-i,1 execută

 i: 1->7
 j: 7-i->9-i


Raspuns: B