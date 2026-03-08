#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <thread>
using namespace std;

int nrDoi(int nr)
{
    int cnt=0;
    while (nr%2==0)
    {
        cnt++;
        nr/=2;
    }
    return cnt;
}

int nrCinci(int nr)
{
    int cnt=0;
    while (nr%5==0)
    {
        cnt++;
        nr/=5;
    }
    return cnt;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr;
    int cnt5=0,cnt2=0;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        cnt5+=nrCinci(nr);
        cnt2+=nrDoi(nr);
        arr.push_back(nr);
    }

    int t=min(cnt5,cnt2);
    int twosSoFar=t,fivesSoFar=t,result=1;
    for (int i = 0; i < n ; i++)
    {
        while (twosSoFar && arr[i]%2==0)
        {
            arr[i]/=2;
            twosSoFar--;
        }
        while (fivesSoFar && arr[i]%5==0)
        {
            arr[i]/=5;
            fivesSoFar--;
        }
        arr[i]%=10;
        result=result*arr[i]%10;
    }
    cout << result;
    return 0;
}