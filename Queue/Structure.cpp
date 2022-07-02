class Queue
{
    private:
    int front;
    int rear;
    int size;
    int *arr;
    
    public:
    Queue()
    {
        front = -1;
        rear = -1;
        size = 0;
    }    
    Queue(int x)
    {
        front = -1;
        rear = -1;
        size = x;
        arr = new arr[size];
    }

};
