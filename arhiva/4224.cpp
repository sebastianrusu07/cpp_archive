int MaxMinDif1(int a[], int n)
{
    int freq[20005]={0};
    vector<int> unique;
    for(int i=0; i<n; i++)
    {
        freq[a[i]+10000]++;
        if (freq[a[i]+10000]==1)
        {
            unique.push_back(a[i]);
        }
    }
    int biggest=0;
    for(int i=0; i<unique.size(); i++)
    {
        int sum = freq[unique[i]+10000] + freq[unique[i]+10001];
        if(sum>biggest)
        {
            biggest=sum;
        }
    }
    return biggest;
}