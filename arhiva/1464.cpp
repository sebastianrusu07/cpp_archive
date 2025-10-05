#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int cifra,k;
    cin>>cifra>>k;
    long long nr=cifra;
    if (k%2==0)
    {
        nr+=1LL*k/2*30-20;
    }else
    {
        nr+=1LL*k/2*30;
    }
    cout<<nr;
    return 0;
}