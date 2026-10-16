bool Palindrom(nod* prim, nod* ultim)
{
    if (prim == ultim)
    {
        return true;
    }

    while (prim!=ultim && prim!=ultim->urm)
    {
        if (prim->info != ultim->info)
        {
            return false;
        }
        prim = prim->urm;
        ultim = ultim->ant;
    }
    return true;
}