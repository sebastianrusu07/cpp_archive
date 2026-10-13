#include <fstream>
#include <vector>
#include <stack>
using namespace std;

struct nod
{
    int info;
    nod *ant, *urm;
};

void FLdiAdDupa(nod *&prim, nod *&ultim, int x)
{
    int minim = prim->info;
    nod *curr = prim;
    while (curr != nullptr)
    {
        if (curr->info < minim)
        {
            minim = curr->info;
        }
        curr = curr->urm;
    }

    curr = prim;
    while (curr->info != minim)
    {
        curr = curr->urm;
    }

    if (curr == prim)
    {
        nod *add = new nod;
        add->info = x;
        add->ant = prim;
        add->urm = prim->urm;
        prim->urm = add;
        if (add->urm != nullptr)
        {
            add->urm->ant = add;
        }
        else
        {
            ultim = add;
        }
        return;
    }
    nod* after = curr->urm;
    nod* add = new nod;
    add->info = x;
    add->ant = curr;
    curr->urm = add;
    add->urm = after;
    if (after != nullptr)
    {
        after->ant = add;
    }else
    {
        ultim = add;
    }
}