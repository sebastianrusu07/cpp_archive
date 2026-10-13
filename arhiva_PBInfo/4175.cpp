
void FLdiAdInainte(nod *&prim, nod *&ultim, int x)
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
        add->urm = prim;
        prim->ant = add;
        prim = add;
        return;
    }

    nod* before = curr->ant;
    nod* add = new nod;
    add->info = x;
    add->ant = before;
    before->urm = add;
    add->urm = curr;
    curr->ant = add;
}