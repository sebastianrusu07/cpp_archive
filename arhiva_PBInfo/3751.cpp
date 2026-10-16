void InserareDupaQ(nod *& prim,nod *& ultim, nod * q,int x)
{
    nod* add = new nod;
    add->info = x;
    add->ant = add->urm = nullptr;

    if(q == nullptr)
    {
        prim = ultim = add;
        return;
    }

    if (q == ultim)
    {
        ultim->urm = add;
        add->ant = ultim;
        ultim = add;
        return;
    }

    nod* next = q->urm;
    add->urm = next;
    add->ant = q;
    q->urm = add;
    next->ant = add;
}