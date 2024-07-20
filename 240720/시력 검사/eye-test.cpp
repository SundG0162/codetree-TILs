#include <iostream>
using namespace std;

int main() {
    float a,b;
    cin >> a >> b;
    a >= 1.0f && b >= 1.0f ? cout << "High" : a >= 0.5f && b >= 0.5f ? cout << "Middle" : cout << "Low";
    return 0;
}