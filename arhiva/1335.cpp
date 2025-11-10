#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
using namespace std;

int main()
{
    string findThese,inThese;
    cin >> findThese >> inThese;

    for (int i=0;i<findThese.size();i++)
    {
        char c=findThese[i];
        if (find(inThese.begin(),inThese.end(),c)!=inThese.end())
        {
            cout << c;
        }
    }
    return 0;
}
