// sir = 1, 3, 5, 7, 10, 12, 45
//             
// x = 4

int i;
for (i = n; i > 0; i--) {
    if (v[i] < x) 
        v[i] = v[i - 1];
    else
    {
        v[i] = x;
        break;
    }
}
if (v[0] > x)
    v[0] = x;
n++; 

raspuns: a) Corect