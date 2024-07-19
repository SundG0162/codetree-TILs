#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    n >= 3000 ? cout << "book" : n >= 1000 ? cout << "1000" : cout << "no";
    return 0;
}