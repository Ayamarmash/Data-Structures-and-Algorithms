void FillArray(int *Arr, int Size)
{
    for(int i=0; i<Size; i++)
    {
        Arr[i] = (rand() % 10) + 1;
    }
}
