#include <iostream>
#define INITIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int n;
int arr[1001];
int main() 
{
    INITIO;
    cin >> n;

    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 3;
    for(int i = 3; i <= n; ++i)
    {
        arr[i] = (arr[i-1] + (arr[i-2] << 1)) % 10007;
    }
    cout << arr[n];

    return 0;
}