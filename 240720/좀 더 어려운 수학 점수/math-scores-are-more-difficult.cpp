#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    a > c ? cout << "A" : a < c? cout << "B" : b > d ? cout << "A" : cout << "B"; 
    return 0;
}