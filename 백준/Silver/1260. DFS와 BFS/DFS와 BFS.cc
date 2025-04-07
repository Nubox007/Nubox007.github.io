#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#define INITIO std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);

int n, m, v;
std::vector<int> arr[1001];
bool visit[1001];

void DFS(int root)
{
    if(visit[root]) return;

    std::cout << root << " ";
    visit[root] = true;

    for(int i = 0; i < arr[root].size(); ++i)
        DFS(arr[root][i]);

    return;
}
void BFS(int root)
{
    std::deque<int> temp;

    temp.push_back(root);
    
    while(!temp.empty())
    {
        int front = temp.front();
        temp.pop_front();
        
        if(visit[front]) continue;

        for(int i = 0; i < arr[front].size(); ++i)
        {
            temp.push_back(arr[front][i]);
        }
        std::cout << front << " ";
        visit[front] = true;
    }       
}
void Initvisit()
{
    for(int i = 0; i < 1001; ++i)
        visit[i] = false;
}
int main()
{
    INITIO;
    std::cin >> n >> m >> v;

    for(int i = 0; i < m; ++i)
    {
        int a, b;
        std::cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    for(int i = 1; i <= n; ++i)
        std::sort(arr[i].begin(), arr[i].end());

    Initvisit();
    DFS(v);
    std:: cout << "\n";
    Initvisit();
    BFS(v);   
    
    return 0;
}
