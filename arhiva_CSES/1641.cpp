#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <string>
#include <bitset>
#include <iostream>
#include <set>
#include <iomanip>
using namespace std;

struct specialInt
{
    int originalPos, value;
};

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
    int n,k;
    cin >> n >> k;

    specialInt numbers[5005];
    for(int i=0;i<n;i++)
    {
        cin >> numbers[i].value;
        numbers[i].originalPos = i;
    }

    sort(numbers,numbers+n,[](specialInt a,specialInt b)
    {
        return a.value < b.value;
    });

    for(int i=0;i<n-2;i++)
    {
        int le=i+1,ri=n-1;
        while(le<ri)
        {
            long long sum=numbers[i].value + numbers[le].value + numbers[ri].value;
            if (sum == k)
            {
                cout << numbers[i].originalPos+1 << ' ' << numbers[le].originalPos+1 << ' ' << numbers[ri].originalPos+1;
                return 0;
            }

            if (sum<k)
            {
                le++;
            }else
            {
                ri--;
            }
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}