#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        int m;
        cin >> m;

        double avg=0;
        vector<int> arr;
        for (int j=0;j<m;j++)
        {
            int num;
            cin >> num;
            arr.push_back(num);
            avg+=num;
        }
        avg/=m;

        double cnt=0;
        for (int j=0;j<m;j++)
        {
            if(arr[j]>avg)
            {
                cnt++;
            }
        }
        cout << fixed <<setprecision(3) << cnt/m*100.0 << "%" << '\n';
    }
    return 0;
}