#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    n == 1 ? cout << "John" : n == 2 ? cout << "Tom" : n == 3 ? cout << "Paul" : cout << "Vacancy";
    return 0;
}