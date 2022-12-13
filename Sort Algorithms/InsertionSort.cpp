#include <iostream>

using namespace std;

void InsertionSort(int* Array, int size){
    for(int i = 1; i < size; i++){// go through all numbers of the array, except the first one (because we assume that it's already sorted
        int value = Array[i];// store the value of the current unsorted number
        int index = i;// store the index of the current unsorted number ( we are going to need it to shift larger numbers to the right then put the current on the proper index)
        while(index > 0 && value < Array[index-1]){// while we are inside the array, and the value of the previous number is greater than the current
            Array[index] = Array[index-1];// shift the previous one to the right
            index--;// move to the next larger number 
          /// v = 1
          ///         <--- index----
          ///             {2,1,              3,5,0,6}
          ///             {2,2,              3,5,0,6}
          /// the while loop stops because (index == 0)
          ///             {2,2,              3,5,0,6} --------> now assign the value in index (proper place) {1,2,              3,5,0,6}
        }
        Array[index] = value;
    }
    
    for(int i=0; i < size; i++) cout << Array[i] << "  ,  ";
}

int main()
{
    int Array[] = {2,1,3,5,0,6};
    int size = 6;
    InsertionSort(Array, size);
    return 0;
}
