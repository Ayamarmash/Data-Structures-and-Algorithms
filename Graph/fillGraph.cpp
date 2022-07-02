    void fillGraph()
    {
        for(int i=0; i<edges ; i++)
        {
            int x , y;
            cout << "Enter 1" << endl;
            cin >> x;
            cout << "Enter 2" <<endl;
            cin >>y;
            adjMatrix[x][y] = 1;
            adjMatrix[y][x] = 1;
        }
    }
