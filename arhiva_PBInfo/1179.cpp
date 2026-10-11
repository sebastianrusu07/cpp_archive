void inserare(nod * p, nod * q, int x)
{
    nod *curr = p;
    while (curr!=nullptr && curr!=q)
    {
        curr=curr->urm;
    }
    if (curr==q)
    {
        nod *next = curr->urm;
        nod *add = new nod;
        add->info=x;
        curr->urm = add;
        add->urm = next;
    }
}