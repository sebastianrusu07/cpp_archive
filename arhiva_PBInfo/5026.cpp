#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>
#include <set>
using namespace std;

void superImportantProcess(int& total,int toAdd)
{
    total += toAdd;
}

int main()
{
    int n;
    cin>>n;

    int total=0;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        superImportantProcess(total,num);
    }
    cout << total;
    return 0;
}