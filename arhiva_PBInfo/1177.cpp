void sterge(nod * & p, nod * q)
{
    if (p == q)
    {
        p = p->urm;
        delete q;
        return;
    }
    nod *curr = p;
    while (curr->urm != nullptr && curr->urm != q)
    {
        curr = curr->urm;
    }
    if (curr->urm == q)
    {
        curr->urm = q->urm;
        delete q;
        return;
    }
}