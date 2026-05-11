#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n,target;
    cin>>n>>target;
    for(int i=1;i<=n;i++)
    {
        int nr;
        cin>>nr;
        if (nr==target)
        {
            if (i<=2)
            {
                if (i==1)
                {
                    cout << "fyrst";
                }else
                {
                    cout << "naestfyrst";
                }
                return 0;
            }
            cout << i << " fyrst";
            return 0;
        }
    }
    return 0;
}