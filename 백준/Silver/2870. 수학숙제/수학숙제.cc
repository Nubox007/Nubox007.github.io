#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define INITIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int n;
vector<string> arr;
void ComareNInsert(string target)
{
    int size = target.size();
    int idx = 0;

    while (idx < arr.size() && arr[idx].size() < size) ++idx;   
    
    while (idx < arr.size() && arr[idx].size() == size && arr[idx] <= target) ++idx;    
    
    arr.insert(arr.begin()+idx, target);
    return;
}
void SaveInteger(string base)
{
    for(int i = 0; i < base.size(); ++i)
    {
        if(base[i] >= 48 && base[i] <= 57)
        {
            string temp = "";
            while(base[i] >= 48 && base[i] <= 57 && i < base.size())
                temp+= base[i++];
        

            int idx = 0;
            while(temp[idx] == '0' && idx < temp.size()-1) 
                ++idx;

            temp.erase(0,idx);
            ComareNInsert(temp);
        }
    }
}
int main() 
{
    INITIO;
    cin >> n;
    vector<string> hw;

    for(int i = 0; i < n; ++i)
    {
        string temp;
        cin >> temp;
        hw.push_back(temp);
    }

    for(int i = 0; i < n; ++i)
        SaveInteger(hw[i]);
    
    for(int i = 0; i < arr.size(); ++i)
        cout << arr[i] << "\n";
   
    return 0;
}