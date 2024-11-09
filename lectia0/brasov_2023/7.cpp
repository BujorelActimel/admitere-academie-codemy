void f(int x, int &y) {
    y = y*x ; -> y = 529
    x = x + y ;  x = 552
    cout<<x<< ' '<<y<< ' ';
}

int z = 23;
f(z, z); // cout << 552 << 529 << 
cout << z; // 529

Raspuns final: 552 << 529 << 529 (b)


// #include <iostream>

// using namespace std;

// int suma(int a, int &b) {
//     int suma = a+b;
//     b = suma;
//     return suma;
// }

// int main() {
//     int a = 2;
//     int b = 3;
//     cout << suma(a, b) << '\n';

//     cout << b << '\n';
//     return 0;
// }