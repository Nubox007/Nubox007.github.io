#include <iostream>
#include <vector>
#include <string>
#define INITIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int N, M;
int area = 0;

vector<vector<int>> matrix;
int main() 
{
    INITIO;
    cin >> N >> M;
    
    area = N > M ? M : N;

    for(int i = 0; i < N; ++i)
    {
        string insert;
        vector<int> line;
        cin >> insert;

        for(int j = 0; j < M; ++j)
        {
            int a = insert[j] - '0';
            line.push_back(a);
        }
        matrix.push_back(line);
    }

    if(area== 1) 
    {
        cout << 1 << endl;
        return 0;
    }

    while(area > 1)
    {
        for(int i = 0; i < N; ++i)
        {            
            int y = i + area - 1;
            if(y >= N) break;
            for(int j = 0; j < M; ++j)
            {
                int x = j + area - 1;
                if(x >= M) break; 
                if(matrix[i][j] == matrix[i][x] && matrix[i][x] == matrix[y][j] && matrix[y][x] == matrix[i][j])
                {
                    cout << area * area << endl;
                    return 0;
                }
            }            
        }
        --area;
    }

    cout << area * area << endl;
    
    return 0;
}
