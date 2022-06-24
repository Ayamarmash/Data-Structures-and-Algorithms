#include <iostream>

using namespace std;

int main() 
{
    int arrSize;
    cout << "enter size " << endl;
    cin >> arrSize;
    int *Arr;
    Arr = new int[arrSize];
   
    /// User can change the size later on
    cout << "enter New size " << endl;
    cin >> arrSize;
    Arr = new int[arrSize];
}
