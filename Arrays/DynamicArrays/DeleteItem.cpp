void DeleteItem(int* Arr, int &Size, int Index)
{
    if(Index >= 0)
    {
        int i;
        for(i= Index; i<Size; i++)
        {
            Arr[i] = Arr[i+1];
        }
        Size--;
    }
    else cout <<"This value doesn't exist." <<endl; 
}
