    void DeleteNode(int Data)
    {        
        if(Head == NULL)
        {
            cout << "Empty List." << endl;
            return;
        }
        else if(Head->value == Data)
        {
            Node *Ptr = new Node();
            Head = Head->next;
            Head->prev = NULL;
            Ptr->next = NULL;
            delete Ptr;
        }
        else if(Tail->value == Data)
        {
            Node *Ptr = new Node();
            Ptr = Tail;
            Tail = Tail->prev;
            Ptr->prev = NULL;
            Tail->next = NULL;
            delete Ptr;
        }
        else
        {
            Node *Ptr = new Node();
            Ptr = Head;
            bool Found = false;
            while(!Found && Ptr->next != Tail)
            {
                if(Ptr->value == Data)
                {
                    Found == true;
                    Ptr->next->prev = Ptr->prev;
                    Ptr->prev->next = Ptr->next;
                    
                    Ptr->prev = NULL;
                    Ptr->next = NULL;
                    Ptr->value = 0;
                }
                else 
                {
                    Ptr = Ptr->next;
                }
            }
            if(!Found) cout << "Value Not Found." << endl;
        }
    }
};
