#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> viable;
    for (int i = 30; i >= 0; i--)
    {
        int powOf2 = 1 << i;
        if (n-powOf2>=0)
        {
            viable.push_back(powOf2);
            n -= powOf2;
        }
    }
    for (int i = viable.size()-1; i >= 0; i--)
    {
        cout << viable[i] << ' ';
    }
    return 0;
}