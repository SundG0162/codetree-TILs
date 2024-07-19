#include <iostream>
using namespace std;

int main() {
    float a,b;
    cin >> a >> b;
    cout << a + b;    
    cout.precision(1);
    cout << fixed;
    cout << " " << (a + b) / 2;
    return 0;
}