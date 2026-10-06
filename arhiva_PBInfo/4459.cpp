void LsiAdd(Nod *&head, int val, int x, int y){
    Nod *curr = head;

    if (curr->info == val)
    {
        Nod *before = new Nod;
        before->info = x;
        before->leg = curr;
        head = before;

        Nod *after = new Nod;
        after->leg = curr->leg;
        after->info = y;
        curr->leg = after;

        return;
    }

    while(curr->leg!=nullptr && curr->leg->info!=val){

        curr = curr->leg;
    }
    if(curr->leg==nullptr){
        return;
    }
    Nod *target = curr->leg;
    Nod *before = new Nod;
    curr->leg = before;
    before->info = x;
    before->leg = target;

    Nod *next = new Nod;
    next->leg = target->leg;
    target->leg = next;
    next->info = y;

    return;
}