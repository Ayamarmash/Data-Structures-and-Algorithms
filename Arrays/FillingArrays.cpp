void FillArray(int *Arr, int Size) //Works for dynamic and static arrays -- the array is passed by referance 
{
    for(int i=0; i<Size; i++)
    {
        Arr[i] = (rand() % 10) + 1;
    }
}
