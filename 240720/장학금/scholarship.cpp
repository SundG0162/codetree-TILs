#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int money = 0;

    money = (b >= 95 ? 100000 : b >= 90 ? 50000 : 0);
    if(a < 90)
        money = 0;

        cout << money;
    return 0;
}