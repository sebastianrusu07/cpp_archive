void produsmaxim(int n,int &pmax,int &a,int &b)
{
    string s = to_string(n);
    a=s[0]-'0';
    b=stoi(s.substr(1));
    pmax = a*b;
    int A=a,B=b;
    for (int i=2;i<s.size();i++)
    {
        a=stoi(s.substr(0,i));
        b=stoi(s.substr(i));
        if (a*b>=pmax)
        {
            pmax=a*b;
            A=a;
            B=b;
        }
    }
    a=A;
    b=B;
}
