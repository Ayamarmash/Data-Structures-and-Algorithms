    void Dequeue()
    {
        if(front == -1 && rear == -1) //Empty Queue
        {
            cout << "Queue Is Empty." << endl;
        }
        else if(front == rear) //One element
        {
            arr[front] = 0;
            front = -1;
            rear = -1;
        }
        else //More than one element
        {
            arr[front] = 0;
            front++;
        }
    }
