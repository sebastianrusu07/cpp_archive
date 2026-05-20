#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int freq[365];

int main(){
    int n;
    cin >> n;

    int cnt=0;
    for(int i = 0; i < n; i++)
    {
        int start,end;
        cin >> start >> end;
        for(int j = start; j <= end; j++)
        {
            if (freq[j] == 0)
            {
                freq[j] = 1;
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}