#include <fstream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

ifstream cin("vacantadevara.in");
ofstream cout("vacantadevara.out");

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int nrZero=0;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin>>nr;
        if (nr==0)nrZero++;
        else v.push_back(nr);
    }
    sort(v.begin(),v.end());
    cout << v[0];
    for(int i=1;i<=nrZero;i++)
    {
        cout << "0";
    }
    for(int i=1;i<v.size();i++)
    {
        cout << v[i];
    }

    cin.close();
    cout.close();

    return 0;
}
