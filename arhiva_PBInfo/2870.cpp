#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("magie.in");
ofstream cout("magie.out");


int main()
{
    int n;
    cin >> n;

    int contor2005=0,maxSum=0;
    for(int i=0; i<n; i++)
    {
        int nr;
        cin >> nr;
        if (nr==2005) contor2005++;
        int sum = nr%10 + nr/10%10 + nr/100%10 + nr/1000;
        maxSum = max(maxSum, sum);
    }
    cout << contor2005 << endl << maxSum;
    return 0;
}