void StergeAB(nod *&prim, nod *&ultim, int A, int B)
{
    if (prim == nullptr) return;
    if (prim == ultim)
    {
        if (prim->info == A || prim->info == B)
        {
            delete prim;
            prim = ultim = nullptr;
            return;
        }
    }
    if (prim->urm == ultim)
    {
        if ( (prim->info == A && ultim->info == B) || (prim->info == B && ultim->info == A) )
        {
            delete prim;
            delete ultim;
            prim = ultim = nullptr;
            return;
        }
        if (prim->info == A || (prim->info == B && ultim->info != B))
        {
            delete prim;
            prim = ultim;
            return;
        }
        if (ultim->info == B || (prim->info != A && ultim->info == A))
        {
            delete ultim;
            ultim = prim;
            return;
        }
    }
    if (prim->info == A)
    {
        nod* aux = prim;
        prim->urm->ant = nullptr;
        prim = prim->urm;
        delete aux;
    }else
    {
        nod* curr = prim;
        while (curr != nullptr && curr->info != A)
        {
            curr = curr->urm;
        }
        if (curr != nullptr)
        {
            if (curr == ultim)
            {
                ultim = curr->ant;
                delete curr;
                ultim->urm = nullptr;
            }else
            {
                curr->ant->urm = curr->urm;
                curr->urm->ant = curr->ant;
                delete curr;
            }
        }
    }

    if (ultim->info == B)
    {
        nod* aux = ultim;
        ultim->ant->urm = nullptr;
        ultim = ultim->ant;
        delete aux;
    }else
    {
        nod* curr = ultim;
        while (curr != nullptr && curr->info != B)
        {
            curr = curr->ant;
        }
        if (curr != nullptr)
        {
            if (curr == prim)
            {
                prim = curr->urm;
                delete curr;
                prim->ant = nullptr;
            }else
            {
                curr->ant->urm = curr->urm;
                curr->urm->ant = curr->ant;
                delete curr;
            }
        }
    }
}