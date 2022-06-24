#include <iostream>

using namespace std;

int main() 
{
    int arrSize;
    cout << "enter size " << endl;
    cin >> arrSize;
    int *Arr;
    Arr = new int[arrSize];
    for(int i=0;i<arrSize;i++)
    {
        Arr[i] = (rand() % 10) + 1;
        cout << Arr[i] << " , ";
    }    
    /// User can change the size later on
    cout << "enter New size " << endl;
    cin >> arrSize;
    Arr = new int[arrSize];
    for(int i=0;i<arrSize;i++)
    {
        Arr[i] = (rand() % 10) + 1;
        cout << Arr[i] << " , ";
    }
}
