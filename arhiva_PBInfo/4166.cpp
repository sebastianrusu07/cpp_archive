int FLsiDublu(Nod *head)
{
    Nod *count = head;
    int n = 1;
    while (count->leg != NULL)
    {
        count=count->leg;
        n++;
    }

    if (n%2!=0)
    {
        return -1;
    }

    Nod *comp = head;
    for (int i = 0; i < n/2; i++)
    {
        comp = comp->leg;
    }

    Nod *curr = head;
    for (int i=0;i<n/2;i++)
    {
        if (curr->info != comp->info)
        {
            return -1;
        }
        if (i+1<n/2)
        {
            curr=curr->leg;
            comp=comp->leg;
        }
    }
    return curr->info;
}