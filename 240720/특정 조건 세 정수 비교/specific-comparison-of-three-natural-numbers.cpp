#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a>> b>>c;

    int min = a > b ? b > c ? c : b : b > c ? b : a;
    cout << (a == b) << " " << (a == b && b == c);
    return 0;
}