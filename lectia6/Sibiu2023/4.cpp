#include <iostream>

using namespace std;

void f1(int var) {
    var = 3;
}

void f2(int &var) {
    var = 3;
}

int main() {
    int var1 = 10;
    int var2 = 10;

    f1(var1);
    f2(var2);

    cout << var1 << ' ' << var2 << '\n';

    return 0;
}