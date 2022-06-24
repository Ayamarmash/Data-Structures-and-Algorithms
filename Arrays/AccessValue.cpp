int AccessValue(int* Arr, int Size, int Value)
{
    for(int i=0;i<Size;i++)
    {
        if(Arr[i] == Value)
        {
            return i;
        }
    }
     return -1;
}
