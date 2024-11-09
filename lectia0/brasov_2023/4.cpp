void f(int x) { 
    int i;
    for(i=x;i>1;--i) { 
        f(x-1);
        cout<<i;
    }
}

f(4) ??

f(4) -> f(3), 4
     -> f(3), 3
     -> f(3), 2


f(3) -> f(2), 3
     -> f(2), 2

f(2) -> f(1), 2

f(1) -> nu face nimic


f(2) afiseaza 2

f(3) afiseaza 2,3,2,2

f(4) afiseaza 2,3,2,2,4,2,3,2,2,3,2,3,2,2,2

Raspus: c)

