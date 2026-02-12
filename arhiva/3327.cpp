#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <iostream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin>>n;

    float root = sqrt(n);
    if (int(root)*int(root)==n)root--;
    int k = int(root)*int(root);

    int len=n-k;
    cout<<len<<endl;

    int nr=k;
    for(int i=0;i<int(root);i++)
    {
        for(int j=0;j<int(root);j++)
        {
            cout << nr << ' ';
            nr--;
        }
        cout<<endl;
    }

}