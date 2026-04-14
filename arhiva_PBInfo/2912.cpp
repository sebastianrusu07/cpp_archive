#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

int main() {
    string nr;
    cin>>nr;
    int carry = 0;
    for(int i=nr.length()-1;i>=0;i--)
    {
        int prod = (nr[i] - '0') * 2 + carry;
        carry = prod / 10;
        nr[i] = (prod % 10) + '0';
    }
    if (carry)
    {
        nr = "1"+nr;
    }
    cout<<nr;
}
