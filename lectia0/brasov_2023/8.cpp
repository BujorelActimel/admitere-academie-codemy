8. Indicați care este conținutul tabloului unidimesional z 
după executarea următoarei secvențe de program.

k = 0

a[++k] = 3
a[k++] = 3

x = {0, 1, 2, 3}



int n=5,m=6,i,j,k;
float z[16],x[]={0,1,2,3,5.5,7}, y[]={0,1,2,3,4,8,9};
i=j=1;k=0;
while(i<=n && j<=m)
    if(x[i]<y[j])
        z[++k]=x[i++];
    else {
        if(x[i]!=y[j]) 
            z[++k]=y[j]; 
        j++;
    }
while(i<=n) 
    z[++k]=x[i++];
while(j<=m) 
    z[++k]=y[j++];


x = 1 2 3 5.5 7
                  i
y = 1 2 3  4  8 9
                   j 

z = 1 2 3 4 5.5 7 8 9

// a. z=(1,2,3,4,5.5,7,8,9)
// b. z=(0,0,1,1,2,2,3,3,4,5.5,7,8,9)
// c. z=(1,1,2,2,3,3)
// d. z=(1,1,2,2,3,3,4,5.5,7) 

Raspuns: a)