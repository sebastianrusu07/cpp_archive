void adaugareInainte(nod * & p , int x)
{
    if(p==nullptr)
    {
        p=new nod;
        p->info=x;
        p->urm=nullptr;
        return;
    }
    nod* newP = new nod;
    newP->info = p->info;
    newP->urm = p->urm;
    p->info = x;
    p->urm = newP;
}