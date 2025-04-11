#include <iostream>
#include <string>
#include <vector>
#define INITIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

vector<string> arr;
int n;
void Print(string base, string result = "")
{
    if(base.size() <= 1)
    {
        cout << result + base +"\n";
        return;
    }
    for(int i = 0; i < base.size(); ++i)
    {
        string temp = base;
        char a = temp[i];
        temp.erase(temp.begin()+i);
        Print(temp, result + a);
    }
}
int main() 
{
    INITIO;
    cin >> n;

    for(int i = 0; i < n ; ++i)
    {
        string temp;
        cin >> temp;
        arr.push_back(temp);
    }

    for(int i = 0; i < n ; ++i)
    {
        cout << "Case # " << i+1 << ":\n";
        Print(arr[i]);
    }
    return 0;
}