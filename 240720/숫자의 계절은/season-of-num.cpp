#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    m >= 3 && m <= 5 ? cout << "Spring" : m >= 6 && m <= 8 ? cout << "Summer" : m >= 9 && m <= 11 ? cout << "Fall" : cout << "Winter";
    return 0;
}