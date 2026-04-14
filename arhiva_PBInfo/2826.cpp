void duplicare(int n,int &d)
{
    string s = to_string(n);
    string nou;
    for(int i=0;i<s.length();i++)
    {
        nou+=s[i];
        if ((s[i]-'0')%2==0)
        {
            nou+=s[i];
        }
    }
    d=stoi(nou);
    if (nou==s)
    {
        d=-1;
    }
}