void AdaugareInceput(nod * & prim , nod * & ultim, int x)
{
    nod* add = new nod;
    add->info = x;
    add->ant = add->urm = nullptr;

    if(ultim == nullptr)
    {
        prim = ultim = add;
        return;
    }

    prim->ant = add;
    add->urm = prim;
    prim = add;
}