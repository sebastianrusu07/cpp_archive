void F_ADD(Nod *head, int x, int y)
{
    Nod *second = head->leg;
    Nod *firstAdded = new Nod();
    firstAdded->info = x;
    firstAdded->leg = second;
    head->leg = firstAdded;

    Nod *secondLast = second;
    while (secondLast->leg->leg != nullptr)
    {
        secondLast = secondLast->leg;
    }
    Nod *secondAdded = new Nod();
    secondAdded->info = y;
    secondAdded->leg = secondLast->leg;
    secondLast->leg = secondAdded;
}