// f(51, 51) -> f(50, 51) ... f(1, 51) = 0

// f(1,51) = 0

// f(2, 51) start = 1, returneaza 2

// f(3, 51) start = 3, returneaza 6

// f(4, 51) start = 6, returenaza 10

// f(5, 51) start = 10, 15

// ...

// f(51,51) start = 50

// i = 50 -> 100

// 50

#include <iostream>

using namespace std;

int f(int n, int k) {
    cout << "Sunt la f(" << n << "," << k << ")\n";
    int i, start;

    if (n == 1) {
        if (n == k) cout << 0 << '\n';
        return 0;
    }
    start = f(n-1, k) + 1;
    cout << " Startul pentru f(" << n << "," << k << ") este: " << start << '\n';

    for (i = start; i < (start+n); i++) {
        if (n == k) cout << i;
        if (i < start+n-1)
            if (n == k) cout << ",";
    }
    return i-1;
}


int main() {
    f(51,51);
    cout << '\n';
    return 0;
}

// raspuns: B