void inserare(nod * & p)
{
    nod *curr = p;
    if (p->info%2==0)
    {
        nod *add = new nod;
        add->info = p->info*2;
        add->urm = p;
        p = add;
    }
    while (curr->urm != nullptr)
    {
        if (curr->urm->info%2==0)
        {
            nod *add = new nod;
            add->info = curr->urm->info*2;
            add->urm = curr->urm;
            curr->urm = add;
            curr = add;
        }
        curr = curr->urm;
    }
}