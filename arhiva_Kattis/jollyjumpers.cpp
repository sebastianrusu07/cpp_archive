#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        unordered_set<int> numbers;

        int previous;
        cin>>previous;
        for(int i=1;i<n;i++)
        {
            int nr;
            cin>>nr;

            int diff=abs(nr-previous);
            if (diff<=n-1)
            {
                numbers.insert(diff);
            }
            previous=nr;
        }

        if (numbers.size()==n-1)
        {
            cout << "Jolly\n";
        }else
        {
            cout << "Not jolly\n";
        }
    }
    return 0;
}