#include <iostream>
using namespace std;

int main() {
    string str, str2;
    cin >> str >> str2;
    int a = 0, b = 0;
    for(int i = 0; i < str.size(); i++)
    {
        int n = str[i] - '0';
        if(n >= 0 && n <= 9)
        {
            a *= 10;
            a += n;
        }
    }

    for(int i = 0; i < str2.size(); i++)
    {
        int n = str2[i] - '0';
        if(n >= 0 && n <= 9)
        {
            b *= 10;
            b += n;
        }
    }
    cout << a + b;
    return 0;
}