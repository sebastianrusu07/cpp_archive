void Plus(int &nr)
{
    string n=to_string(nr);

    for (int i=1; i<n.length(); i++)
    {
        if (n[i-1]=='2' && n[i]=='5')n[i]='6';
    }

    nr=stoi(n);
}