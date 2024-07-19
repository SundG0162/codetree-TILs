#include <iostream>
using namespace std;

int main() {
    int h,w;
    cin >> h >> w;
    int b = (10000 * w) / (h * h);   
    cout << b;
    if(b >= 25)
    {
        cout << endl << "Obesity";
    }
    return 0;
}