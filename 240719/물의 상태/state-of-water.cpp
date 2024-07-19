#include <iostream>
using namespace std;

int main() {
    int temp;
    cin >> temp;

    temp < 0 ? cout << "ice" : temp >= 100 ? cout << "vapor" : cout << "water";

    return 0;
}