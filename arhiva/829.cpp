void afis()
{
    int nr;
    cin >> nr;
    if (nr == 0)
    {
        cout << "0 ";
        return;
    }
    afis();
    cout << nr << " ";
}