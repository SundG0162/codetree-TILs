#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    n >= 90 ? cout << "A" : n >= 80 ? cout << "B" : n >= 70 ? cout << "C" : n <= 60 ? cout << "D" : cout << "F";
    return 0;
}