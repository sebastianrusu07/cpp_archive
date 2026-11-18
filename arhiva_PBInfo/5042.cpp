#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int rearrange(int arr[],pair<int,int> mirror[],int low,int high)
{
    int pivot = arr[low];
    int leftIterator = low;
    for(int i=low+1;i<=high;i++)
    {
        if(arr[i]<pivot)
        {
            leftIterator++;
            swap(arr[leftIterator],arr[i]);
            swap(mirror[leftIterator],mirror[i]);
        }
    }
    swap(arr[low],arr[leftIterator]);
    swap(mirror[low],mirror[leftIterator]);
    return leftIterator;
}

void quickSort(int arr[],pair<int,int> mirror[], int low, int high)
{
    if (low < high)
    {
        int pivot = rearrange(arr,mirror,low,high);
        quickSort(arr,mirror,low,pivot-1);
        quickSort(arr,mirror,pivot+1,high);
    }
}

int main(){
    int n;
    cin >> n;
    int values[10005];
    pair<int,int> expenses[10005];
    for(int i=0; i<n*2; i++){
        cin >> expenses[i].first >> expenses[i].second;
        values[i] = (expenses[i].first-expenses[i].second);
    }
    quickSort(values,expenses,0,2*n-1);
    int sum=0;
    for(int i=0;i<2*n;i++){
        if(i<n){
            sum += expenses[i].first;
        }else{
            sum += expenses[i].second;
        }
    }
    cout << sum;
    return 0;
}