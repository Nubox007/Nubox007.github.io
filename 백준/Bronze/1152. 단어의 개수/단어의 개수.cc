#include <iostream>
#include <sstream>
#include <string>
#define INITIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main() 
{
    INITIO;
    int cnt = 0;
    string line;
    getline(cin, line);

    istringstream  sstr(line);
    string temp;
    
    while(sstr >> temp) ++cnt;
    cout << cnt;    
    return 0;
}
