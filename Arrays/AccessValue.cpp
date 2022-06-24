void AccessValue(int* Arr, int Size, int Value)
{
    bool Found = false;
    for(int i=0;i<Size;i++)
    {
        if(Arr[i] == Value)
        {
            Found == true;
            cout << "Found At index " << i << endl;
            return;
        }
        else Found == false;
    }
    cout <<"Not Found"<< endl;
}
