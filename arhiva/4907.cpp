#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i=2;i<=n;i+=2)cout << i << " ";
    cout<<endl;
    for (int i=3;i<=n;i+=3)cout << i << " ";
    cout<<endl;
    for (int i=2;i<=n;i+=1)if ((i%2==0 || i%3==0) && i%6!=0)cout << i << " ";
    return 0;
}