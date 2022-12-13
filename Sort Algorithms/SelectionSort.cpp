///////////////// Selection Sort is an inplace sort -> which means it's space complexity is O(1), meanwhile it's Time complexity is O(n*n)
#include <iostream>
using namespace std;
void SelectionSort(int* Array, int size){
    for(int i = 0; i < size; i++){ // go through the most_left number so far
        int smallestSoFar = i; // assume that this most_left number is the smallest one so far, assign it's index in smallestSoFar
        for(int j = i; j < size; j++){ // go through the numbers after array[i], try to find a number which is smaller than it
            if(Array[j] < Array[smallestSoFar]){ // if a smaller number was found, store it's index in smallestSoFar
                smallestSoFar = j;
            }
        }
      // now after searching for the index of the smallest number after array[i]
        if(Array[smallestSoFar] < Array[i]){ 
          // if a smaller number was found, swap it with the current array[i]
          //otherwise(no smaller number was found) the array[i] is the smallest so far, which means it's on the right place!! and we won't change anything
            int temp = Array[smallestSoFar]; 
            Array[smallestSoFar] = Array[i];
            Array[i] = temp;
        }
    }
  // for printing the array
    for(int i = 0; i < size; i++){
        cout << Array[i] << "   ,   " ;
    }
}

int main()
{
    int Array[] = {2,1,3,5,0,6};
    int size = 6;
    SelectionSort(Array, size);
    return 0;
}
