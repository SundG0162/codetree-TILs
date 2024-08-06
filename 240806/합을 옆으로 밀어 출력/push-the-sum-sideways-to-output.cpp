#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[101];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    string str = to_string(sum);
    string c(1, str[0]);
    string result = "";
    for(int i = 1; i < str.size(); i++)
    {
        result += str[i];
    }
    result += c;

    cout << result;
    return 0;
}