long long toBase10(long long num, int base)
{
    long long nextPow = 1,res=0;
    string s = to_string(num);
    for (int i = s.length() - 1; i >= 0; i--)
    {
        res += (s[i]-'0') * nextPow;
        nextPow *= 1LL * base;
    }
    return res;
}

long long fromBase10(long long num,int targetBase)
{
    string result;
    do{
        result += num % targetBase + '0';
        num /= targetBase;
    }while (num);
    reverse(result.begin(), result.end());
    return stoll(result);
}

long long fromBaseToBase(long long num, int currentBase, int targetBase)
{
    return fromBase10(toBase10(num,currentBase),targetBase);
}