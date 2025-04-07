#include <iostream>
#include <vector>
#define INITIO std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);

int n;
std::vector<int> arr;
std::vector<int> result;


int main()
{
    INITIO;

    std::cin >> n ;
    arr.resize(n);

    for(int i = 0; i < n; ++i)
        std::cin >> arr[i];

    
    while(result.size() < n)
    {
        for(int i = 0; i < n; ++i)
        {
            if(arr[i] == 0) 
            {
                result.push_back(i+1);
                arr[i] = -1;
                break;
            }
        }
        for(int i = 0; i < n; ++i)
            if(arr[i] > 0 && result.back() > i) --arr[i];
       
    }

    for(int i = 0; i < n; ++i)
        std::cout << result[i] << " ";        
    
    return 0;
}
