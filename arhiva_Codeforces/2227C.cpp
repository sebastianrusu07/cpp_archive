#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;

        vector<int> hasTwo;
        vector<int> hasThree;
        vector<int> hasSix;
        vector<int> normal;

        for(int j=0;j<n;j++)
        {
            int nr;
            cin>>nr;
            if (nr%6==0)
            {
                hasSix.push_back(nr);
                continue;
            }else
            {
                if (nr%2==0)
                {
                    hasTwo.push_back(nr);
                    continue;
                }else
                {
                    if (nr%3==0)
                    {
                        hasThree.push_back(nr);
                        continue;
                    }
                }
            }
            normal.push_back(nr);
        }

        for(int j=0;j<hasSix.size();j++)
        {
            cout << hasSix[j] << ' ';
        }
        for(int j=0;j<hasTwo.size();j++)
        {
            cout << hasTwo[j] << ' ';
        }
        for(int j=0;j<normal.size();j++)
        {
            cout << normal[j] << ' ';
        }
        for(int j=0;j<hasThree.size();j++)
        {
            cout << hasThree[j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}