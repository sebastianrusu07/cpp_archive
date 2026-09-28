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
    cin>>n>>k;

    int firstKTerms[200005],everythingElse[200005];
    for(int i=0;i<k;i++)
    {
        cin>>firstKTerms[i];
    }
    for(int i=0;i<n-k;i++)
    {
        cin>>everythingElse[i];
    }

    quickSort(firstKTerms,0, k-1);
    quickSort(everythingElse,0,n-k-1);

    for (int i=0;i<k;i++)
    {
        cout << firstKTerms[i] << " ";
    }
    for (int i=n-k-1;i>=0;i--)
    {
        cout << everythingElse[i] << " ";
    }
    return 0;
}