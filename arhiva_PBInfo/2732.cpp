void Succesor(int a[], int n, int k)
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    a[i]++;
    for (int j = i + 1; j <= k; j++)
    {
        a[j] = a[j - 1] + 1;
    }
}