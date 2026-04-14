#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string convertB(long long nr,int base)
{
    string result = "";
    string characters = "0123456789";
    while (nr)
    {
        result += characters[nr % base]; //nuj daca e bine
        nr /= base;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int nr,b;
    cin>>nr>>b;
    string numar = convertB(nr,b);

    int maxCifra=0;
    for(char c : numar)
    {
        int caracter = c - '0';
        maxCifra=max(maxCifra,caracter);
    }
    cout<<maxCifra;
    return 0;
}