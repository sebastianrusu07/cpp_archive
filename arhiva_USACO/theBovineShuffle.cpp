#include <fstream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

ifstream cin("shuffle.in");
ofstream cout("shuffle.out");

int main()
{
    int n;
    cin>>n;

    int pos[n];
    for (int i=0;i<n;i++)
    {
        cin>>pos[i];
        pos[i]--;
    }

    string id[n];
    for (int i=0;i<n;i++)
    {
        cin>>id[i];
    }

    for (int k=0;k<3;k++)
    {
        string temp[n];
        for (int i=0;i<n;i++)
        {
            temp[i]=id[pos[i]];
        }
        for (int i=0;i<n;i++)
        {
            id[i]=temp[i];
        }
    }

    for (int i=0;i<n;i++)
    {
        cout << id[i] << '\n';
    }
    cin.close();
    cout.close();
    return 0;
}