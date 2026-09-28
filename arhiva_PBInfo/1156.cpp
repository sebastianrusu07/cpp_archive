#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <unordered_map>
#include <string>
#include <bitset>
#include <fstream>
#include <set>
#include <iomanip>
#include <iostream>
using namespace std;

int indexes[1005];

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
            swap(indexes[leftIterator],indexes[i]);
        }
    }
    swap(arr[low],arr[leftIterator]);
    swap(indexes[low],indexes[leftIterator]);
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
    for (int i=0;i<1000;i++)
    {
        indexes[i]=i;
    }

    int n;
    cin>>n;

    int arr[1005];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout << indexes[i]+1 << " ";
    }
    return 0;
}