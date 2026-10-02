void stergePrimul(nod * & p)
{
    if (p->urm == nullptr)
    {
        p = nullptr;
        return;
    }
    p=p->urm;
}