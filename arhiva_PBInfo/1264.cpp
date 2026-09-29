#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

ifstream cin("statisticiordine.in");
ofstream cout("statisticiordine.out");

unsigned int rearrange(unsigned int arr[],unsigned int low,unsigned int high)
{
    unsigned int mid = (low+high)/2;

    if(arr[mid]<arr[low])
    {
        swap(arr[mid],arr[low]);
    }
    if(arr[high]<arr[low])
    {
        swap(arr[high],arr[low]);
    }
    if(arr[high]<arr[mid])
    {
        swap(arr[high],arr[mid]);
    }
    swap(arr[low],arr[mid]);

    unsigned int pivot = arr[low];
    unsigned int leftIterator = low;

    for(unsigned int i=low+1;i<=high;i++)
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

unsigned int k;

void quickSelect(unsigned int arr[], unsigned int low, unsigned int high) //very niche
{
    if (low < high)
    {
        unsigned int pivot = rearrange(arr,low,high);
        if (pivot < k)
        {
            quickSelect(arr,pivot+1,high);
        }else if(pivot > k)
        {
            quickSelect(arr,low,pivot-1);
        }
    }
}

unsigned int arr[4000005];

int main(){
    unsigned int n;
    cin >> n >> k;
    k--;
    for(unsigned int i=0;i<n;i++){
        cin >> arr[i];
    }
    quickSelect(arr,0,n-1);

    cout << arr[k];
    return 0;
}