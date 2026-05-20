#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
using namespace std;

int main(){
    int k,n;
    cin >> k >> n;

    int people=0,denies=0;
    for(int i=0;i<n;i++)
    {
        string dir;
        int cnt;
        cin >> dir >> cnt;

        if (dir=="enter")
        {
            if (people+cnt>k)
            {
                denies++;
            }else
            {
                people+=cnt;
            }
        }else
        {
            people-=cnt;
        }
    }
    cout << denies;
    return 0;
}