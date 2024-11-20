#include <iostream>
#include <string>
using namespace std;

// Template function
template <typename flexibleType>
void printArray(flexibleType array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Sequential search
bool seqSearch(string target, string arr[], int start, int end) {
    for (int i = start; i <= end; i++) {
        if (arr[i] == target) { // Use == for string comparison
            return true;
        }
    }
    return false;
}

// Iterative binary search
bool binSearch(float target, float arr[], int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return true;
        }
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return false;
}

// Recursive binary search
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

// Swap function
void swap(double darray[], int index, int index2) {
    double temp = darray[index];
    darray[index] = darray[index2];
    d
