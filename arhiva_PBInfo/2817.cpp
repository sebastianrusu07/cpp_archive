void identice(int a,int b)
{
    bool one=false;
    for(int i=1;i<=9;i++)
    {
        if (i<a || i>b) continue;
        cout << i << ' ';
        one = true;
    }
    for(int i=11;i<=99;i+=11)
    {
        if (i<a || i>b) continue;
        cout << i << ' ';
        one = true;
    }
    for(int i=111;i<=999;i+=111)
    {
        if (i<a || i>b) continue;
        cout << i << ' ';
        one = true;
    }
    for(int i=1111;i<=9999;i+=1111)
    {
        if (i<a || i>b) continue;
        cout << i << ' ';
        one = true;
    }
    for(int i=11111;i<=99999;i+=11111)
    {
        if (i<a || i>b) continue;
        cout << i << ' ';
        one = true;
    }
    for(int i=111111;i<=999999;i+=111111)
    {
        if (i<a || i>b) continue;
        cout << i << ' ';
        one = true;
    }
    for(int i=1111111;i<=9999999;i+=1111111)
    {
        if (i<a || i>b) continue;
        cout << i << ' ';
        one = true;
    }
    if (!one)
    {
        cout << "nu exista";
    }
}