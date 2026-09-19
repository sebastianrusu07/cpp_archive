#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <set>
using namespace std;

ifstream cin("progresie3.in");
ofstream cout("progresie3.out");

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

bool alreadyAppeared[1005];

int main()
{
    int num,numCount=0,numbers[1005];
    while (cin >> num && num!=-1)
    {
        if (!alreadyAppeared[num])
        {
            numbers[numCount++] = num;
            alreadyAppeared[num] = true;
        }
    }

    quickSort(numbers,0,numCount-1);

    int r=numbers[1]-numbers[0];
    for (int i=2;i<numCount;i++)
    {
        int prev = numbers[i-1], curr=numbers[i];
        if (curr-prev!=r)
        {
            cout << "NU";
            return 0;
        }
    }
    cout << r;
    return 0;
}