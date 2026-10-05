void MakeList(nod *&head, int a[], int n)
{
    head = new nod;
    head->info = a[0];
    nod *prev = head;
    for (int i = 1; i < n; i++)
    {
        nod *curr = new nod;
        curr->info = a[i];
        prev->urm = curr;
        prev = curr;
    }
    prev->urm = nullptr;
}