    void Enqueue(int x)
    {
        if(front == -1 && rear == -1) //Empty Queue
        {
            front++;
            rear++;
            arr[rear] = x;
        }
        else if(rear == size) //Full Queue
        {
            cout <<"Queue is full." << endl;
        }
        else //Have more than one element
        {
            rear++;
            arr[rear] = x;
        }
    }
