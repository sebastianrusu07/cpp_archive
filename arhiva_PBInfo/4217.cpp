int DistMin(int a[], int n, int x, int y)
{
    int lastX = -1;
    int lastY = -1;
    int bestDist = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x) lastX = i;
        if (a[i] == y) lastY = i;
        if (lastX != -1 && lastY != -1)
        {
            bestDist = min(bestDist, abs(lastX-lastY));
        }
    }
    return bestDist;
}