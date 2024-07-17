#include <iostream>
using namespace std;

int pow(int x, int y)
{
    if(y == 1)
       return x;
    int n = pow(x, y-1);
    return n * x;
}

int main() 
{
    int x,y;
    cin >> x >> y;
    
    int a = pow(x,y), b = pow(y,x);

    if(a > b)
    {
        cout << a - b;
    }
    else
    {
        cout << b - a;
    }
    return 0;
}