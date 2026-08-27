#include<fstream>
#include<cmath>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if (n<5 || n*(n+1)%6!=0)
    {
        cout << "NU";
        return 0;
    }

    vector<int> bus1,bus2,bus3;
    int k=0;
    if ((n-5)%6==0)
    {
        bus1.push_back(1);
        bus1.push_back(4);
        bus2.push_back(2);
        bus2.push_back(3);
        bus3.push_back(5);
        k=6;
    }
    if ((n-6)%6==0)
    {
        k=1;
    }
    if ((n-8)%6==0)
    {
        bus1.push_back(1);
        bus1.push_back(3);
        bus1.push_back(8);
        bus2.push_back(2);
        bus2.push_back(4);
        bus2.push_back(6);
        bus3.push_back(5);
        bus3.push_back(7);
        k=9;
    }
    if ((n-9)%6==0)
    {
        bus1.push_back(1);
        bus1.push_back(2);
        bus1.push_back(3);
        bus1.push_back(4);
        bus1.push_back(5);
        bus2.push_back(6);
        bus2.push_back(9);
        bus3.push_back(7);
        bus3.push_back(8);
        k=10;
    }

    for (;k<=n;k+=6)
    {
        bus1.push_back(k);
        bus1.push_back(k+5);
        bus2.push_back(k+1);
        bus2.push_back(k+4);
        bus3.push_back(k+2);
        bus3.push_back(k+3);
    }

    for (int i:bus1)
    {
        cout<<i<<' ';
    }
    cout<<endl;
    for (int i:bus2)
    {
        cout<<i<<' ';
    }
    cout<<endl;
    for (int i:bus3)
    {
        cout<<i<<' ';
    }
    return 0;
}