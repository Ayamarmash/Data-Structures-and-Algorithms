#include <iostream>
using namespace std;
class Node
{
    private:
    int value;
    Node *next; //Pointer to Next Node
    Node *prev; //Pointer to Previous Node -- used for Doubly Linked list
    friend class LinkedList; //To allow LinkedList Class to access the private attributes
    
    public:
   // Constructer to create new nodes with no value -- used to create pointers of 'Node'
    Node ()
    {
      next = NULL;
      prev = NULL;
    }
    // Constructer to create new node with a value -- the value is determined by user 
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
    Node *Head; // Pointer that is pointing at the first Node of the list -- if NULL then the Linked list is empty
    Node *Tail; // Poiner that is pointing at the last Node of the list
    
    public:
   // Constucter to initialize a new empty Linked List
    LinkedList() 
    {
        Head = NULL; 
        Tail = NULL;
    }
}
