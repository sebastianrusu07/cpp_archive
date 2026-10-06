void FInserareKX(Nod * &head, int k, int x)
{
    if (head == nullptr)
    {
        head = new Nod;
        head->info = x;
        return;
    }
    k = max(-1,k-2);
    Nod *curr = head;
    if (k==-1)
    {
        Nod *add = new Nod;
        add->info = x;
        add->leg = curr;
        head = add;
        return;
    }
    while (curr->leg != nullptr && k>0)
    {
        curr = curr->leg;
        k--;
    }

    Nod *target = curr->leg;

    Nod *add = new Nod;
    add->info = x;
    add->leg = target;
    curr->leg = add;

    return;
}