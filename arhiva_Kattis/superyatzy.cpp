#include <iostream>
#include <iomanip>
using namespace std;

int freq[7];

int main(){
    int n,k;
    cin >> n >> k;

    for(int i=0;i<n;i++)
    {
        int nr;
        cin >> nr;
        freq[nr]++;
    }

    for (int i=1;i<=6;i++)
    {
        if (freq[i]+k>=n)
        {
            cout << "Ja";
            return 0;
        }
    }
    cout << "Nej";
    return 0;
}