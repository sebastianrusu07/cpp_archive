void Reord(nod *&head)
{
    nod *curr = head;
    while (curr->urm != nullptr)
    {
        if (curr->urm->info < 0)
        {
            nod *temp = curr->urm;
            curr->urm = temp->urm;
            temp->urm = head;
            head = temp;
        }else
        {
            curr=curr->urm;
        }
    }
    return;
}