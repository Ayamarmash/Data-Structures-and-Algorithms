#include <iostream>
using namespace std;
class Node
{
    private:
    int value;
    Node *next;
    Node *prev;
    friend class LinkedList;
    
    public:
    Node ()
    {
      next = NULL;
      prev = NULL;
    }
    
    Node (int Data)
    {
      value= Data;
      next = NULL;
      prev = NULL;
    }
};

class LinkedList
{
    private:
    Node *Head;
    Node *Tail;
    
    public:
    LinkedList() 
    {
        Head = NULL; 
        Tail = NULL;
    }
    
    void AddNode(int Data)
    {
            Node* NewNode = new Node();
            NewNode->value = Data;
            if(Head == NULL)
            {
                Head = NewNode;
                Tail = NewNode;
                return;
            }
            Tail->next = NewNode;
            NewNode->prev = Tail;
            Tail = NewNode;
        }

    void PrintList()
    {
        if(Head == NULL)
        {
            cout << "Empty List." << endl;
            return;
        }
        
        Node *Ptr = new Node();
        Ptr = Head;
        while(Ptr != NULL)
        {
            cout << Ptr->value << endl;
            Ptr = Ptr->next;
        }
    }
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
int main()
{
    LinkedList x;
    x.AddNode(2);
    x.AddNode(4);
    x.AddNode(88);
    x.AddNode(21);
    x.PrintList();
    x.DeleteNode(88);
    cout << "After Deleting " << endl ;
    x.PrintList();
    return 0;
}
