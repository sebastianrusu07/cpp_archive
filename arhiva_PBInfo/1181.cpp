void inserare(nod * p)
{
    nod *curr = p;
    while (curr != nullptr)
    {
        if (curr->info%2==0)
        {
            nod *add = new nod;
            add->info = curr->info*2;
            add->urm = curr->urm;
            curr->urm = add;
            curr = add;
        }
        curr = curr->urm;
    }
}