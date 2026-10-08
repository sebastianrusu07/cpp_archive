#include <fstream>
using namespace std;

ifstream cin("circularlistinsert.in");
ofstream cout("circularlistinsert.out");

struct nod{
    int info;
    nod * urm;
};

int main()
{
    int n;
    cin >> n;

    nod *head = nullptr,*prev = nullptr;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        nod *newNod = new nod;
        newNod->info = nr;
        newNod->urm = nullptr;
        if (head == nullptr)
        {
            head = newNod;
            prev = head;
        }else
        {
            prev->urm = newNod;
            prev = newNod;
        }
    }
    prev->urm = head;

    int m;
    cin >> m;
    nod *it = head;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;

        for (int j = 0; j < x; j++)
        {
            it=it->urm;
        }
        nod *add = new nod;
        add->info = 2*it->info;
        add->urm = it->urm;
        it->urm = add;
        it = add;
    }

    nod *curr = head;
    do
    {
        cout << curr->info << " ";
        curr = curr->urm;
    }while (curr!=head);
    return 0;
}