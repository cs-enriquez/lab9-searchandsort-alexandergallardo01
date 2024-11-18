#include <iostream>
#include <string>

using namespace std;

template <typename flexibleType>
void printArray(flexibleType array[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

// Implement a sequential search algorithm
// your function should search for a target value (target)
//    within the indices of "start" to "end"
// return true if target exists in the array within this range,
//    return false otherwise
bool seqSearch(string target, string arr[], int start, int end) {
    for (int i =start; i <= end; i++){
        if(arr[i].equals(target)){
            return true;
        }
    }
    return false;
}

// Implement an iterative binary search 
// Return true if target exists in the array with size n,
//    return false otherwise 
bool binSearch(float target, float arr[], int n) {
    int low = 0;
    int right = arr.length();
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return true;
        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}


// Implement a recursive binary search 
// Return true if target exists in the array with size n
//   return false otherwise
bool binSearchR(char target, char charray[], int n) {
    bool binSearchR(char target, char charray[], int n) {
    if (n <= 0) {
        return false; 
    }
    
    int mid = n / 2; 

    if (charray[mid] == target) {
        return true; 
    } else if (charray[mid] < target) {
        return binSearchR(target, charray + mid + 1, n - mid - 1);
    } else {
        return binSearchR(target, charray, mid);
    }
}

}

// Implement a brand new sorting algorithm
//    Don't use a reference for this!
//    Be sure to do your best to implement the algorithm's logical steps
// Step 1: implement a function swap() that will swap any two elements in an array,
//          given their indices
// Step 2: implement a function minFind() that will find and return 
//          the **index** of the smallest element in an array
/*
Step 3: Finally, use your two functions above to complete the following in newSort():
        1 - search through the array to find the location of the smallest value
        2 - swap this value with the value at the start of the array
        3 - the first element is now sorted! 
            Redo your sort on the remaining elements (from index 1 to end)
            On the next iteration, you should be swapping the smallest remaining value 
                with the second index value in the array
            ...then swapping the smallest remaining value with the third indexed value... etc.
            
        4 - continue iterating until you reach the end of the list
        *** You can make this recursive, if you wish!
*/

void swap(double darray[],int index, int index2) {
    double temp  = darray[index];
    darray[index] = darray[index2];
    darray[index2] = temp;

}

int minFind(double darray[]) {
    int minIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

void newSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {

        int minIndex = minFind(arr, i, n);
        swap(arr, i, minIndex);
    }
}


