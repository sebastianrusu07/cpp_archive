#include <fstream>
#include <string>

using namespace std;

ifstream cin("paritatesiruri.in");
ofstream cout("paritatesiruri.out");

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        string s;
        cin >> s;

        string first,second;
        for(int i=0;i<s.size();i++){
            if(i%2==0){
                second+=s[i];
            }else{
                first+=s[i];
            }
        }

        cout << first << ' ' << second << '\n';
    }
    return 0;
}
