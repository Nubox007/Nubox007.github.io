#include <iostream>
#include <vector>
#include <cmath>
#include <chrono>
#define INITIO std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);

long long a, b;
int cnt = 0;

int main()
{

    INITIO;
    std::vector<int> csArr(10000001,1), prime;
    for (int i = 2; i <= 10000000; i++)
    {
        if (csArr[i]) 
        {
            prime.push_back(i);
            for (int j = i * 2; j <= 10000000; j += i)
            csArr[j] = 0;
        }
    }  
    std::cin >> a >> b;

    for(int i : prime)
    {
        long long temp = i;
        while(temp <= (b/i))
        {
            temp*=i;
            if(temp >= a) ++cnt;
        }
    }
    std::cout << cnt << std::endl;


    return 0;
}
