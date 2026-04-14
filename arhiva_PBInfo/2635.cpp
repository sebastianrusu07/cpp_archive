#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
using namespace std;

ifstream cin("capslock.in");
ofstream cout("capslock.out");

int main()
{
    string input,result;
    getline(cin,input);

    bool capsOn = false;
    for(int i=0;i<input.size();i++)
    {
        if (input[i] == '#')
        {
            if (capsOn) capsOn = false;
            else capsOn = true;
        }else
        {
            if (capsOn)
            {
                result.push_back(toupper(input[i]));
            }else
            {
                result.push_back(tolower(input[i]));
            }
        }
    }
    cout << result;
    return 0;
}
