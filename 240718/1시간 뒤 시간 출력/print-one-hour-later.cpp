#include <iostream>
using namespace std;

int main() {
    int h,m;
    cin >> h;
    cin.get();
    cin >> m;
    h++;
    if(h > 24)
        h = 0;
    cout << h << ":" <<m;
    return 0;
}