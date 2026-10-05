void adaugare(nod * & p , int x)
{
    if (p == nullptr)
    {
        p=new nod;
        p->info=x;
        p->urm=nullptr;
        return;
    }
    nod *curr = p;
    while (curr->urm != nullptr)
    {
        curr = curr->urm;
    }
    nod *newNode = new nod;
    newNode->info = x;
    curr->urm = newNode;
    newNode->urm = nullptr;
}