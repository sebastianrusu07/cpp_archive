void StergeAfterQ(nod*&prim,nod*&ultim, nod*q)
{
    if(prim == nullptr || q == ultim)
    {
        return;
    }

    nod* aux = q->urm;
    aux->ant->urm = aux->urm;
    aux->urm->ant = aux->ant;
    delete aux;
}