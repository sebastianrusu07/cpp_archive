#include <iostream>
#include <iomanip>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        unordered_map<int,int> app;
        int c;
        cin>>c;
        for(int j=0;j<c;j++)
        {
            int nr;
            cin>>nr;
            app[nr]++;
        }

        for (auto it : app)
        {
            if(it.second==1)
            {
                cout << "Case #" << i+1 << ": " << it.first << '\n';
                break;
            }
        }
    }
    return 0;
}