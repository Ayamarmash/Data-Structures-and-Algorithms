    void insertItem(int Key)
    {
        int index = hashFunction(Key); //calculating the index
        Table[index].AddNode(Key); // storing the key in the Linked List that exist in the calculated index
    }
