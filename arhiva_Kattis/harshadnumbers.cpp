#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int sumCif(int n)
{
    int sum=0;
    while (n)
    {
        sum += n%10;
        n/=10;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;

    int sum = sumCif(n);
    while (n%sum!=0)
    {
        n++;
        sum = sumCif(n);
    }
    cout << n;
    return 0;
}