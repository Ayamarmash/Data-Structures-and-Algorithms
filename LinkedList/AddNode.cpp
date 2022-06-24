void AddNode(int Data)
{
  Node* NewNode = new Node();
  NewNode->value = Data;
  if(Head == NULL) // First edge case -- The Linked List is empty
  {
    Head = NewNode;
    Tail = NewNode;
    return;
  }
  // Second edge case -- The Linked List is not empty
  Tail->next = NewNode;
  NewNode->prev = Tail;
  Tail = NewNode;
}
