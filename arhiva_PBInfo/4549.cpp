#include <fstream>

using namespace std;

ifstream cin("conway.in");
ofstream cout("conway.out");

int main()
{
    int n,g;
    cin >> n >> g;
    int matrice[n+2][n+2];
    for(int i=0;i<=n+1;i++){
        for(int y=0;y<=n+1;y++){
            if(i==0 || y==0||i==n+1 || y==n+1)matrice[i][y]=0;
            else cin >> matrice[i][y];
        }
    }
    int prevMatrice[n+2][n+2];
    for(int k=0;k<g;k++){
        for(int w=0;w<=n+1;w++){
            for(int v=0;v<=n+1;v++){
                prevMatrice[w][v]=matrice[w][v];   //TLE GALORE BRO
            }
        }
        for(int i=1;i<=n;i++){
            for(int y=1;y<=n;y++){
                int fr=0; //friends -> vecini

                if(prevMatrice[i][y+1]==1)fr++;
                if(prevMatrice[i+1][y+1]==1)fr++;
                if(prevMatrice[i][y-1]==1)fr++;
                if(prevMatrice[i-1][y+1]==1)fr++;
                if(prevMatrice[i+1][y-1]==1)fr++;
                if(prevMatrice[i-1][y]==1)fr++;
                if(prevMatrice[i-1][y-1]==1)fr++;
                if(prevMatrice[i+1][y]==1)fr++;

                if(matrice[i][y]==1){
                    if(fr<2)matrice[i][y]=0;
                    else if(fr>3)matrice[i][y]=0;
                }else{
                    if(fr==3)matrice[i][y]=1;
                }
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int y=1;y<=n;y++){
            cout << matrice[i][y] << " ";
        }
        cout << endl;
    }

    cin.close();
    cout.close();

    return 0;
}
