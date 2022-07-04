class Node {
  private:
    int data;
    Node* left;
    Node* right;
  public:
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Tree
{
  private Node* Root;
  
  public:
  Tree()
  {
    Root = NULL;
  }
  void insertNode(int value)
  {
    Node *node = new Node(value);
    if(Root == NULL)
    {
      Root = node;
    }
    else
    {
      if(node->value > Root->value) 
      {
      }
    }
  }
}
