#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        unordered_map<string,int> cities;
        int m;
        cin >> m;
        for(int j=0;j<m;j++)
        {
            string name;
            cin >> name;
            cities[name]++;
        }
        cout << cities.size() << '\n';
    }
    return 0;
}