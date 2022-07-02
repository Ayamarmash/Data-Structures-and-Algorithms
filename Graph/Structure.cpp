class Graph
{
    private:
    int** adjMatrix ;
    int nodes ;
    int edges;
    
    public:
    Graph(int x, int edg)
    {
        nodes = x;
        edges = edg;
        
        adjMatrix = new int*[x];
        
        for(int i=0;i<x;i++)
        {
            adjMatrix[i] = new int[x];
        }
    }
}
