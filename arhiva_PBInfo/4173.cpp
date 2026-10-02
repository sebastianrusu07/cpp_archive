int FLdiCauta(nod *prim, nod *ultim, int k)
{
    if (k>0)
    {
        nod* curr = prim;
        k--;
        while (k>0 && curr->urm!=nullptr)
        {
            curr = curr->urm;
            k--;
        }
        return curr->info;
    }else
    {
        nod* curr = ultim;
        k=abs(k);
        k--;
        while (k>0 && curr->ant!=nullptr)
        {
            curr = curr->ant;
            k--;
        }
        return curr->info;
    }
}