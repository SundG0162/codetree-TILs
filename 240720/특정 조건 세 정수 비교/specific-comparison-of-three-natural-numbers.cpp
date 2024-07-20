#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a>> b>>c;

    int min = a > b ? b > c ? c : b : a > c ? c : a;
    cout << (a == min) << " " << (a == b && b == c);
    return 0;
}