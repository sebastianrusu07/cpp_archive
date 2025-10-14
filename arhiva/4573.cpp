#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mare=INT_MIN;
    for (int i=1;i<=n;i++)
    {
        string nr;
        cin>>nr;
        bool addidas = false;
        if (nr.length()==6)
        {
            if (nr[0]!=nr[1] && nr[0]!=nr[2] && nr[0]!=nr[5] && nr[1]!=nr[2] && nr[1]!=nr[5] && nr[2]!=nr[5])
            {
                if (nr[0]==nr[4])
                {
                    if (nr[1]==nr[3])
                    {
                        addidas = true;
                    }
                }
            }
        }
        if (addidas)mare=max(mare,stoi(nr));
    }
    if (mare!=INT_MIN)cout<<mare;
    else cout << "nu exista";
    return 0;
}
