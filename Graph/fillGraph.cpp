    void fillGraph()
    {
        for(int i=0; i<e ; i++)
        {
            int x , y;
            cin >> x>>y;
            adjMatrix[x][y] = 1;
            adjMatrix[y][x] = 1;
        }
    }
