void FillDynamicArray(int *Arr) //pass the array by address 
{
    for(int i=0; i<sizeof(Arr); i++) // sizeof Takes the Arr as a parameter and return the size of it
    {
        Arr[i] = (rand() % 10) + 1; // Filling the array with random numbers between (1 , 10)
    }
}
