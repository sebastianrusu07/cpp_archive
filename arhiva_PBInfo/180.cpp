#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> vector;
    int mare=INT_MIN,mic=INT_MAX,micI,mareI;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin >> nr;
        vector.push_back(nr);
        if (nr>mare)
        {
            mare=nr;
            mareI=i;
        }
        if (nr<mic)
        {
            mic=nr;
            micI=i;
        }
    }
    if (mareI>micI)sort(vector.begin()+micI,vector.begin()+mareI+1);
    else sort(vector.begin()+mareI,vector.begin()+micI+1);
    for (int i=0;i<vector.size();i++)
    {
        cout << vector[i] << " ";
    }
    return 0;
}