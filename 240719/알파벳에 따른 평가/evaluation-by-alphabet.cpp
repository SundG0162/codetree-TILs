#include <iostream>
using namespace std;

int main() {
    char n;
    cin >> n;
    n == 'S' ? cout << "Superior" : n == 'A' ? cout << "Excellent" : n == 'B' ? cout << "Good" : n == 'C' ? cout << "Usually" : n == 'D' ? cout << "Effort" : cout << "Failure";
    return 0;
}