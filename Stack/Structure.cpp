class Stack
{
    private:
    int top;
    int capacity;
    int *arr;
    public:
    Stack()
    {
        top =-1;
    }
    Stack(int x)
    {
        top = -1;
        capacity = x;
        arr = new int[capacity];
    }
};
