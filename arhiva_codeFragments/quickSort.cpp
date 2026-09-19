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