#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
using namespace std;

int freq[501];

int main(){
    int n;
    cin >> n >> ws;

    unordered_map<string,int> map;
    for(int i = 0; i < n; i++)
    {
        int arr[5];
        for(int j = 0; j < 5; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr+5);
        string ans;
        for(int j = 0; j < 5; j++)
        {
            ans += to_string(arr[j]);
            if(j != 4) ans += " ";
        }
        map[ans]++;
    }

    int maxi=0,app=0;
    for(auto x : map)
    {
        if (x.second > maxi)
        {
            maxi = x.second;
            app = maxi;
        }else
        {
            if (x.second == maxi)
            {
                app+=x.second;
            }
        }
    }
    cout << app;
    return 0;
}