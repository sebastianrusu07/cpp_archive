int numarare(nod* p)
{
    nod* curr = p;
    nod* next = p->urm;
    int pairs=0;
    while (next!=nullptr)
    {
        if (curr->info == next->info)
        {
            pairs++;
        }
        curr = next;
        next = next->urm;
    }
    return pairs;
}