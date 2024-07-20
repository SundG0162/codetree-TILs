#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    a % 13 == 0 || a % 19 == 0 ? cout << "True" : cout << "False";
    return 0;
}