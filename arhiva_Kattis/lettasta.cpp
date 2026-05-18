#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    vector<string> names;
    vector<int> scores(n);
    for(int i=0;i<n;i++)
    {
        string name;
        cin >> name;
        names.push_back(name);
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int score;
            cin >> score;
            scores[j] += score;
        }
    }

    int pos=0;
    for(int i=0;i<n;i++)
    {
        if(scores[i]>scores[pos])
        {
            pos=i;
        }
    }
    cout << names[pos];
    return 0;
}