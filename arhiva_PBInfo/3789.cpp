void oglindire(nod * & p)
{
    nod *curr = p;
    nod *prev = nullptr;

    while (curr!=nullptr)
    {
        nod *next = curr->urm;
        curr->urm = prev;
        prev = curr;
        curr = next;
    }

    p = prev;
}