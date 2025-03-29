#include <iostream>
using namespace std;

int main() {
    int v[] = { 0,0,0 }, n = 5, i;
    for (i = 0; i < n; i++)
    {
        if (v[i])
            v[i] += 1;
    }

    for (i = 0; i < n; i++)
    {
        cout << v[i] << ' ';
    }
    cout << '\n';
}