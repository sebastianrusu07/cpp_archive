#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

ifstream cin("halfsortqs.in");
ofstream cout("halfsortqs.out");

int main()
{
    int n;
    cin >> n;

    vector<int> positives;
    vector<int> negatives;
    vector<int> arr(n);

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];

        if(arr[i]>0)
        {
            positives.push_back(arr[i]);
        }else
        {
            negatives.push_back(arr[i]);
        }
    }

    sort(positives.begin(),positives.end(),greater<int>());
    sort(negatives.begin(),negatives.end());

    int posIdx=0,negIdx=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            cout << negatives[negIdx++] << ' ';
        }else
        {
            cout << positives[posIdx++] << ' ';
        }
    }

    return 0;
}