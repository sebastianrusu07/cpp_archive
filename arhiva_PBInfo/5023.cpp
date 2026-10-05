void FlsiInv(Nod* &head)
{
    Nod *curr = head;
    Nod *prev = NULL;

    while (curr!=NULL)
    {
        Nod *next = curr->leg;
        curr->leg = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
}