#include <iostream>
using namespace std;

int main()
{
    int grid[5][6]{};
    // initialize a grid with 1000 using nested loops
    for (int row = 0; row < 5; row++)
    {
        for (int col; col < 6; col++)
        {
            grid[row][col] = 1000;
        }
    }
    return 0;
}