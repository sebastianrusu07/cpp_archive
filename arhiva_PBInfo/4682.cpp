

void Erase(nod *&prim, nod *&ultim)
{
    if (ultim == prim && prim->info%2==0)
    {
        prim = nullptr;
        ultim = nullptr;
        return;
    }
    nod* curr = prim;
    while (curr != nullptr)
    {
        if (curr->info%2!=0)
        {
            curr = curr->urm;
            continue;
        }
        if (curr == ultim)
        {
            nod* aux = curr;
            ultim = curr->ant;
            if (ultim != nullptr)
            {
                ultim->urm = nullptr;
            }
            else
            {
                prim = nullptr;
            }
            curr = nullptr;
            delete aux;
        }
        else if (curr == prim)
        {
            nod* aux = curr;
            curr->urm->ant = nullptr;
            curr=curr->urm;
            prim = curr;
            delete aux;
        }
        else
        {
            nod* aux = curr;
            curr->ant->urm = curr->urm;
            curr->urm->ant = curr->ant;
            curr = curr->urm;
            delete aux;
        }
    }
}