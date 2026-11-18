#include <fstream>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n<=1)return false;
    if (n==2)return true;
    if (n%2 == 0)return false;
    for (int i=3; i*i<=n; i+=2)
    {
        if (n%i == 0)return false;
    }
    return true;
}

bool isPalindrome(string n)
{
    string reversed = n;
    reverse(reversed.begin(), reversed.end());
    return n == reversed;
}

int PP(int n)
{
    string s = to_string(n);
    string firstHalf = s.substr(0, s.length()/2),secondHalf = s.substr(s.length()/2);
    return isPalindrome(s) && (s.length()%2==0) && (isPrime(stoi(firstHalf))) && (isPrime(stoi(secondHalf)));
}