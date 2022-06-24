void PrintList()
{
  if(Head == NULL) // First edge case -- The Linked List is empty
  {
    cout << "Empty List." << endl;
    return;
  }

  Node *Ptr = new Node(); //Pointer to point at each Node sequentially
  Ptr = Head; //To point at the first Node
  while(Ptr != NULL) // While the pointer is not NULL -- when NULL it means the Linked List finished
  {
    cout << Ptr->value << endl;
    Ptr = Ptr->next;
  }
}
