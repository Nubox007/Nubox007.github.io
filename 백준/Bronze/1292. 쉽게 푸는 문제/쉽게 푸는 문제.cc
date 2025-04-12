#include <iostream>
#include <vector>
#define INITIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int a, b;

int Calc(int target)
{
    int rest = 0;
    int result = 0;
    int idx = 0;
    for(int i = 1; i <= 1000; ++i)
    {
        if(idx+i >= target)
        {
            rest = (target - idx) * i;
            result = (i*(i-1)*(2*i-1)) / 6;
            break;
        }else
            idx += i;
    }
    return result + rest;
}
int main() 
{
    INITIO;
    cin >> a >> b;

    cout << Calc(b) - Calc(a-1) << endl;
    return 0;
}