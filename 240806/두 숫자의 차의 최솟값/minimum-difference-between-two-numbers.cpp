#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[11];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = 1000;
    for(int i = 0; i < n-1; i++)
    {
        if(min > arr[i+1] - arr[i])
        {
            min = arr[i+1] - arr[i];
        }
    }

    cout << min;
    return 0;
}