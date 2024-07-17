#include <iostream>
using namespace std;

int pow(int num)
{
    if(num == 1)
        return 3;
    int n = pow(num-1);
    return n * 3;
}
int main() {
    int n;
    cin >> n;
    cout << pow(n);
}