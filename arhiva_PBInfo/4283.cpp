#include <algorithm>
#include <vector>
#include <cmath>
#include <fstream>
using namespace std;

ifstream cin("lowmem1.in");
ifstream cin1("lowmem1.in");
ofstream cout("lowmem1.out");

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin1.tie(nullptr);
    int k;
    cin >> k;

    long long sum = 0,sumMax = 0,nr;
    for(int i = 0; i < k; i++)
    {
        cin >> nr;
        sumMax += nr;
    }
    sum = sumMax;
    int aux,startMax = 0,start=to_string(k).size()+1;
    cin1 >> aux;
    while (cin >> nr)
    {
        long long subtractedNr;
        cin1 >> subtractedNr;
        sum -= subtractedNr;
        sum += nr;
        start+=to_string(subtractedNr).size()+1;
        if (sum > sumMax)
        {
            sumMax = sum;
            startMax = start;
        }
    }

    cout << sumMax << '\n';
    cin.clear();
    cin.seekg(startMax, ios::beg);
    for (int i=0;i<k;i++)
    {
        cin >> aux;
        cout << aux << ' ';
    }
    return 0;
}