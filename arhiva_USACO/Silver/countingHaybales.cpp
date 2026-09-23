#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <string>
#include <bitset>
#include <fstream>
#include <set>
#include <iomanip>
using namespace std;

ifstream cin("haybales.in");
ofstream cout("haybales.out");

int rearrange(int arr[],int low,int high)
{
    int pivot = arr[low];
    int leftIterator = low;
    for(int i=low+1;i<=high;i++)
    {
        if(arr[i]<pivot)
        {
            leftIterator++;
            swap(arr[leftIterator],arr[i]);

        }
    }
    swap(arr[low],arr[leftIterator]);
    return leftIterator;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = rearrange(arr,low,high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }
}

int main()
{
    int n,q;
    cin >> n >> q;

    int a[100005];
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    quickSort(a,0,n-1);

    for (int i=0;i<q;i++)
    {
        int low,high;
        cin >> low >> high;

        auto firstGood = lower_bound(a,a+n,low)-a;
        auto lastGood = upper_bound(a,a+n,high)-a;

        cout << lastGood-firstGood << '\n';
    }
    return 0;
}