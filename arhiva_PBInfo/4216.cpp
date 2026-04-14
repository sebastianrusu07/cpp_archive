int EliminaElemente(int a[], int n, int m)
{
    unordered_map<int, int> ap;
    for (int i = 0; i < n; i++)
        ap[a[i]]++;

    vector<pair<int, int>> vec;
    for (auto it : ap)
        vec.push_back(make_pair(it.second, it.first));

    sort(vec.begin(), vec.end());

    int i = 0;
    while (m > 0 && i < vec.size())
    {
        if (m >= vec[i].first)
        {
            m -= vec[i].first;
            vec[i].first = 0;
        }
        else
        {
            vec[i].first -= m;
            m = 0;
        }
        i++;
    }

    int counter = 0;
    for (auto it : vec)
        if (it.first > 0) counter++;

    return counter;
}