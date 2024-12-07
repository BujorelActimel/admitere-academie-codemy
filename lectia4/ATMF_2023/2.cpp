matrice:
int a[3][5] = 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

matrice patratica: n = m

1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

(0,0) (0,1) (0,2) (0,3)
(1,0) (1,1) (1,2) (1,3)
(2,0) (2,1) (2,2) (2,3)
(3,0) (3,1) (3,2) (3,3)

Principala: (0,0) (1,1) (2,2) (3,3) - linia = coloana
Secundara : (0,3) (1,2) (2,1) (3,0) - linia+coloana = n-1 (n = numaru de lini/coloane)

sub secundara: (1,3) (2,2) (2,3) (3,1) (3,2) (3,3) - linia+coloana > (n-1)
deasupra secundarei : (0,0) (0,1) (0,2) (1,0) (1,1) (2,0)  - linia+coloana < (n-1)


sub principala:       (1,0) (2,0) (3,0) (2,1) (3,1) (3,2)   - linia > coloana
deasupra principalei: (0,1) (0,2) (0,3) (1,2) (1,3) (2,3)   - linia < coloana


{3} U (3, inf) = [3, inf]

{n-1} U (n-1, inf) = [n-1, ]

linia+coloana == n-1 || linia+coloana > (n-1)

-> linia+coloana >= n-1

n=4

i: 0->n-1

a) j: i->0

matrix[i][n-j-1]

i = 0
j:0->0
matr[0][0]

i = 1
j:1->0
matr[1][1]
matr[1][0]

i = 2
j:2->0
matr[2][2]
matr[2][1]
matr[2]

b) j: i->1


(0,0) (0,1) (0,2) (0,3)
(1,0) (1,1) (1,2) (1,3)
(2,0) (2,1) (2,2) (2,3)
(3,0) (3,1) (3,2) (3,3)

.. (la fel ca a)

c) nu scad de la 0

d) j: 0->i-1

matr[0][3]
matr[0][2]
