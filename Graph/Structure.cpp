class Graph
{
    private:
    int v; //Vertices
    int e; //Edges
    int **adjMatrix;
    
    public:
    Graph(int n , int m)
    {
        v = n;
        e = m;
        adjMatrix = new int[v+1][v+1];
    }
}
