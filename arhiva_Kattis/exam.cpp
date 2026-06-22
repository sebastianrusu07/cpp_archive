#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int k;
    cin>>k;

    string your,friends;
    cin>>your>>friends;

    int correct=0;
    for(int i=0;i<your.length();i++)
    {
        if(your[i]==friends[i])
        {
            if (k>0)
            {
                correct++;
                k--;
            }
        }else
        {
            correct++;
        }
    }
    cout<<correct-k;
    return 0;
}