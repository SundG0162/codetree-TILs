#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    (n % 2 != 0 && n % 3 == 0) || (n % 2 == 0 && n % 5 == 0) ? cout << "true" : cout << "false";
    return 0;
}