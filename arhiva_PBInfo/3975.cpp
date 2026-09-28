#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <unordered_map>
#include <string>
#include <bitset>
#include <set>
using namespace std;

ifstream cin("intervale.in");
ofstream cout("intervale.out");

struct point
{
    int val;
    bool isStart;
};

int main(){
    int n;
    cin>>n;

    vector<point> arr;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;

        point A,B;
        A.val = a;
        A.isStart = true;
        B.val = b;
        B.isStart = false;

        arr.push_back(A);
        arr.push_back(B);
    }

    sort(arr.begin(),arr.end(),[](point a,point b)
    {
        if(a.val == b.val)
        {
            return a.isStart;
        }
        return a.val < b.val;
    });

    int score=0,maxScore=0;
    for(int i=0;i<2*n;i++)
    {
        point currentPoint = arr[i];
        if(currentPoint.isStart)
        {
            score++;
            maxScore = max(maxScore,score);
        }else
        {
            score--;
        }
    }
    cout << maxScore;
    return 0;
}