#include <iostream>

using namespace std;

void BubbleSort(int* Array, int size){
    for(int i = 1; i < size; i++){// for each number in the array ---- starting from the second one ------> this for loop for going through numbers that are not sorted yet
        bool flag = 0;// to check if the array is sorted and we don't have to continue
        for(int j = 0; j < size-i; j++){// for each number (from the start of the array till the size - i ) -----> this for loop for comparision
            if(Array[j] > Array[j+1]){//swap if not sorted, and put the larger number on the left
                int temp = Array[j];
                Array[j] = Array[j+1];
                Array[j+1] = temp;
                flag = 1;// we got into the swap operation, which means that the array is not sorted
            }
        }
        if(flag == 0) break;// if the i changed and the flag is 0 that means we should stop, all elements now are sorted
    }
    for(int i=0; i < size; i++) cout << Array[i] << "  ,  ";// printing
}

int main()
{
    int Array[] = {2,1,3,5,0,6};
    int size = 6;
    BubbleSort(Array, size);
    return 0;
}
