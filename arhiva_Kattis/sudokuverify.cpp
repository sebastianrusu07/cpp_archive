#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int row[10][10];
int col[10][10];
int box[100][10];

int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            int nr;
            cin >> nr;

            int rowID = i/3 - (i%3==0);
            int colID = j/3 - (j%3==0);
            int boxID = rowID*10 + colID;

            if (row[i][nr] == 1 || col[nr][j] == 1 || box[boxID][nr] == 1)
            {
                cout << "INVALID!";
                return 0;
            }

            row[i][nr] = 1;
            col[nr][j] = 1;
            box[boxID][nr] = 1;
        }
    }

    cout << "VALID";
    return 0;
}