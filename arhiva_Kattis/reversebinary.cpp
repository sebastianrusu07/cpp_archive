#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    string res;
    while (n)
    {
        res+=(n%2==0?'0':'1');
        n/=2;
    }
    reverse(res.begin(), res.end());

    int result = 0;
    for(int i = 0; i < res.size(); i++)
    {
        if(res[i] == '1')
        {
            result += pow(2,i);
        }
    }
    cout << result;
    return 0;
}