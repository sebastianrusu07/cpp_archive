void AdaugareFinal(nod * & prim , nod * & ultim, int x)
{
    nod* add = new nod;
    add->info = x;
    add->ant = add->urm = nullptr;

    if(ultim == nullptr)
    {
        prim = ultim = add;
        return;
    }

    ultim->urm = add;
    add->ant = ultim;
    ultim = add;
}