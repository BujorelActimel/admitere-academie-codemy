#include <stdio.h>

int f(int x) {
    if (x == 0)
        return 10;
    else
        if (x % 5 == 0)
            return f(x / 10) * 10 + x;
        else
            return f(x / 10) * (x % 10);
}
int main() {
    printf("%d\n", f(2504));
} 

// f(2504) -> 2500 * 4 = 10000
// f(250) -> 225 * 10 + 250 = 2250 + 250 = 2500
// f(25) -> 20 * 10 + 25 = 225
// f(2) -> 10 * 2 -> 20
// f(0) -> 10

Raspuns: c) Corect