class Hash
{
    int Size; 
    LinkedList *Table;
    
    public:
    Hash(int v) // To create empty hash table
    {
        Size = v;
        Table = new LinkedList[Size]; // To create array of Linked lists
    }
};
