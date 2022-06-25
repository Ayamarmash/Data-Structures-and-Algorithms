    void PrintHash()
    {
        for(int i=0; i<Size;i++)
        {
            cout << "List " << i << " :" << endl;
            Table[i].PrintList(); // Print the linked list in each index of the array,, you can find the implemetation of PrintList method in LinkedList file
        }
    }
