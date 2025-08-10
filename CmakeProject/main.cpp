#include <iostream>

int w = 4, h = 4;
int Chkover(int i, int j)
{
    return i >=0 && i < w && j >= 0  && j < h ? 1 : 0;
}
int main() 
{
    int field[4][4] = {{0,1,0,1},{0,0,0,1},{1,1,1,0},{0,1,1,1}};
    int mines[4][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};

    for(int y = 0; y < h; ++y)
    {
        for(int x = 0; x < w; ++x)
        {
            if(field[y][x] == 0) continue;
            for(int j = y-1; j <= y+1; ++j)
            {
                for(int i = x-1; i <= x+1; ++i)
                    if(Chkover(j,i) == 1) ++mines[j][i];
            }
        }
    }

    for(int y = 0; y < h; ++y)
    {
        for(int x = 0; x < w; ++x)
        {
            std::cout << mines[y][x] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}