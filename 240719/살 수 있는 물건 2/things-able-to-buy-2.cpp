#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    n >= 3000 ? cout << "book" : n >= 1000 ? cout << "mask" : n >= 500 ? cout << "pen" : cout << "no";
    return 0;
}