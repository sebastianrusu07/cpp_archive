#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int n,maxDif;
    cin >> n >> maxDif;

    vector<int> notes(n);
    for (int i = 0; i < n; i++)
    {
        cin >> notes[i];
    }

    sort(notes.begin(), notes.end());

    int recordings = 1,start=0;
    for (int i = 1; i < n; i++)
    {
        if (notes[i] - notes[start] > maxDif)
        {
            recordings++;
            start=i;
        }
    }
    cout << recordings;
    return 0;
}