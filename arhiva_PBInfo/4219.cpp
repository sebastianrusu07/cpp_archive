int Egalitate(int a[], int n)
{
    unordered_map<int, int> freq;
    for (int i=0; i<n; i++)
    {
        freq[a[i]]++;
    }

    int bestCase = INT_MAX;
    for (auto i : freq)
    {
        int baseline = i.second,totalMoves=0;
        for (auto j : freq)
        {
            if (j.second >= baseline)
            {
                totalMoves += j.second-baseline;
            }else
            {
                totalMoves += j.second;
            }
        }
        bestCase = min(bestCase, totalMoves);
    }
    return bestCase;
}