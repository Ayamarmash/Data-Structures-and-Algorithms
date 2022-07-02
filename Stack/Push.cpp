    void Push(int x)
    {
        if(top == capacity)
        {
            cout << "Stack is full." << endl;
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }
