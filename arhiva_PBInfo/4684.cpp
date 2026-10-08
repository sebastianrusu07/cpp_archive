void EraseThird(nod *head){
    if(head == nullptr || head->urm == nullptr || head->urm->urm == nullptr){
        return;
    }

    int count=1;
    nod *curr = head;
    while (curr!=nullptr && curr->urm!=nullptr)
    {
        if (count==2)
        {
            count = 1;
            nod *aux = curr->urm;
            curr->urm = aux->urm;
            curr = curr->urm;
            delete aux;
        }else
        {
            count++;
            curr = curr->urm;
        }
    }
}