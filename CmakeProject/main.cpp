#include <iostream> 
#include <vector>
#define INIT ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int N, R, Q;
vector<vector<int>> matrix;

int main()
{
    cin >> N >> R >> Q;

    matrix.resize(N+1);
    for(int i = 0; i < N+1; ++i)
        matrix[i].resize(N+1);
    

    for(int i = 1; i <= N; ++i)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        matrix[temp1][temp2] = 1;
        matrix[temp2][temp1] = 1;
    }
    
    for(int i = 0; i < Q; ++i)
    {
        int temp;
        cin >> temp;
    }


    return 0;
}