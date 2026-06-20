#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    string text;
    char material;
    int width,gap;
    cin >> text >> material >> width >> gap;

    int rowLength = text.length() + 2*width + 2*gap;
    int rows = 1 + 2*width + 2*gap;

    string constructFrame = string(rowLength, material);
    string constructFiller = string(width,material) + string(gap,' ') + string(text.size(),' ') + string(gap,' ') + string(width,material);
    string constructMiddle = string(width,material) + string(gap,' ') + text + string(gap,' ') + string(width,material);

    vector<string> painting;
    for (int i=0;i<width;i++)
    {
        painting.push_back(constructFrame);
    }

    for (int i=0;i<gap;i++)
    {
        painting.push_back(constructFiller);
    }

    painting.push_back(constructMiddle);

    for (int i=0;i<gap;i++)
    {
        painting.push_back(constructFiller);
    }

    for (int i=0;i<width;i++)
    {
        painting.push_back(constructFrame);
    }


    for (int i=0;i<rows;i++)
    {
        cout << painting[i] << '\n';
    }
    return 0;
}