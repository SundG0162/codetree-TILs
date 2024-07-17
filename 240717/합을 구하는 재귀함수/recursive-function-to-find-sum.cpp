#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int sum = 0;
    if(n % 2 == 0)
    {
        for(int i = n; i <= 100; i++)
        {
            if(i % 2 ==0)
                sum += i;   
        }
    }
    else
    {
        for(int i = n; i <= 100; i++)
        {
            if(i % 2 != 0)
                sum += i; 
        }
    }
    cout << sum;
    return 0;
}