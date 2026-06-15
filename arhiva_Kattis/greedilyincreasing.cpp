#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v;
    int biggest=-1;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin>>nr;
        if (nr>biggest)
        {
            biggest=nr;
            v.push_back(nr);
        }
    }
    cout<<v.size()<<endl;
    for (int nr : v)
    {
        cout<<nr<<" ";
    }
    return 0;
}