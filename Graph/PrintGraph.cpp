    void printGraph()
    {
        for(int i=0; i<nodes ;i++)
        {
            for(int j=0; j<nodes; j++)
            {
                if(adjMatrix[i][j] == 1)
                {
                    cout << "Vertex ( " << i << ", " << j << " )"<<endl;
                }
            }
        }
    }
