#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <fstream>
#include <thread>
using namespace std;

ifstream cin("siruri_concatenate.in");
ofstream cout("siruri_concatenate.out");

int main()
{
    int n;
    cin>>n;

    int sum=0;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;

        string first = s.substr(0,s.size()/2);
        string second = s.substr(s.size()/2,s.size()/2);

        sum+= (first==second);
    }
    cout<<sum;
    return 0;
}