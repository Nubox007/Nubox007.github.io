#include <iostream>
#include <vector>
#include <string>
#define INITIO std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);

std::vector<std::string> matrix;
bool visit[5][5];
int r, c, k;
int cnt = 0;

void InitVisit()
{
    for(int i = 0; i < 5; ++i)
    {
        for(int j = 0; j < 5; ++j)
            visit[i][j] = false;
    }
    return;
}
void DFS(int x, int y, int len = 1)
{
    
    if(x >= r || x < 0 || y >= c || y < 0) return;
    else if(visit[x][y] || matrix[x][y] == 'T') return;
    else if(x == 0 && y == c-1)
    {
        if(k == len) ++cnt;
        return;
    }

    visit[x][y] = true;
    DFS(x+1, y, len+1);
    DFS(x-1, y, len+1);
    DFS(x, y+1, len+1);
    DFS(x, y-1, len+1);
    visit[x][y] = false;
    return;
}

int main()
{

    INITIO;
    std::cin >> r >> c >> k;
    
    matrix.resize(r);

    for(int i = 0; i < r; ++i)
        std::cin >> matrix[i];                
    
    
   
    InitVisit();
    DFS(r-1, 0);
    std::cout << cnt << std::endl;


    return 0;
}
