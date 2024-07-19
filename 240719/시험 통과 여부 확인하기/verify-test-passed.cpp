#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    n >= 80 ? cout << "pass" : cout << 80 - n << " more scores";
    return 0;
}