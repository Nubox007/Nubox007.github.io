#include <iostream>
#include <vector>
#define INITIO std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);

int n, s, cnt = 0;
std::vector<int> arr;


void DFS(int idx, int sum)
{
    if(idx == n)
    {
        if(sum == s) ++cnt;
        return;
    }
    DFS(idx+1, sum+arr[idx]);
    DFS(idx+1, sum);

}
int main()
{
    INITIO;

    std::cin >> n >> s;
    arr.resize(n);

    for(int i = 0; i < n; ++i)
        std::cin >> arr[i];

    DFS(0,0);
    if(s == 0) --cnt;
    std::cout << cnt << std::endl;
    
    return 0;
}
