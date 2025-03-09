#include <iostream>
#include <cstdio>
using namespace std;
int x, y, z, w;
void f(int x, int y)
{
    int z;
    if(x > y)
    {
        w = x; z = y;
        x = x + y; y = x - y;
    }
    else 
    { 
        w = y; z = x; 
    }
    cout<<x<<" "<<y<<" ";  // 33 22
}

int main()
{
    x = 11; y = 22;
    f(y, x);
    cout<<x<<" "<<y<<" "<<z<<" "<<w; // 33 22 11 22 0 22
    return 0;
}
