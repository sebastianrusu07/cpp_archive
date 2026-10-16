void StergeQ(nod * & prim, nod * & ultim, nod * q)
{
    if(prim == nullptr)
    {
        return;
    }

    if (q == prim)
    {
        nod* aux = prim;
        prim = prim->urm;
        prim->ant = nullptr;
        delete aux;
        return;
    }

    if (q == ultim)
    {
        nod* aux = ultim;
        ultim = ultim->ant;
        ultim->urm = nullptr;
        delete aux;
        return;
    }

    q->ant->urm = q->urm;
    q->urm->ant = q->ant;
    delete q;
}