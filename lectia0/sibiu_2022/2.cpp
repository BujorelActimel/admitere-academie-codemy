void test(int &a, int b) {
    a = a + 2;
    if (b > 2) {
        test(a, b - 2);
    }
    else {
        if (b < 2) {
            test(a, b + 1);
        }
        else {  
            cout << a << ' ' << b;
        }
    }
}

x = 11
y = 5

a = 11
b = 2

test(x, y);
cout << x << ' ' << y;


test(a, 3);

test(a, 1);

test(a, 2);

cout << 11 << 2
cout << 11 << 5

Raspuns: b) 11 2 11 5