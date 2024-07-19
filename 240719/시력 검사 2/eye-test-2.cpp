#include <iostream>
using namespace std;

int main() {
    float a;
    cin >> a;

    a >= 1.0f ? cout << "High" : a >= 0.5f ? cout << "Middle" : cout << "Low";
    return 0;
}