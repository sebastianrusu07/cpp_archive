void FLsiElimina(Nod * &head)
{
    Nod *first,*last;
    if (head->info%3==0)
    {
        first = head;
    }else
    {
        first = nullptr;
    }
    Nod *curr = head;
    while (curr!=nullptr)
    {
        if (curr->info%3==0)
        {
            if (first==nullptr)
            {
                first=curr;
            }
            last=curr;
        }
        curr=curr->leg;
    }
    if (first == head)
    {
        head = last->leg;
        return;
    }
    curr = head;
    while (curr->leg!=first)
    {
        curr = curr->leg;
    }
    curr->leg = last->leg;
}