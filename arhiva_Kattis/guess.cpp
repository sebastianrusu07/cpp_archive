#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int st=1,dr=1000;
    string response;
    while (true)
    {
        int mid=(st+dr)/2;
        cout << mid << endl;
        cin >> response;

        if (response == "correct") return 0;

        if (response == "higher")
        {
            st=mid+1;
        }else
        {
            dr=mid-1;
        }
    }
    return 0;
}