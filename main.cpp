#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int k;
        cin>>k;
        cin.ignore();

        string name;
        getline(cin,name);

        bool pancakes=false,peaSoup=false;
        for(int j=1;j<=k;j++)
        {
            string menu;
            getline(cin,menu);
            if(menu=="pancakes")
            {
                pancakes=true;
            }else if(menu=="pea soup")
            {
                peaSoup=true;
            }

            if(pancakes && peaSoup)
            {
                cout << name;
                return 0;
            }
        }
    }
    cout << "Anywhere is fine I guess";
    return 0;
}