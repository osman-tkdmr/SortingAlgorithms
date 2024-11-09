#include "../include/CountingSort.h"
#include <iostream>


void CountingSort::countingSort(std::vector<int>& arr) {
    if (arr.empty()) return;

    int max = arr[0];
    
    // Find the maximum element in the array
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    // Initialize countArray with size max + 1 and fill with zeros
    std::vector<int> countArray(max + 1, 0);
    
    // Count the occurrences of each element
    for (int i = 0; i < arr.size(); i++) {
        countArray[arr[i]]++;
    }
    
    // Modify countArray to store the cumulative count
    for (int i = 1; i < countArray.size(); i++) {
        countArray[i] += countArray[i - 1];
    }
    
    // Initialize outArray with the same size as arr
    std::vector<int> outArray(arr.size());
    
    // Fill outArray in a stable manner
    for (int i = arr.size() - 1; i >= 0; i--) {
        outArray[countArray[arr[i]] - 1] = arr[i];
        countArray[arr[i]]--;
    }
    
    // Copy the sorted array back to arr
    arr = outArray;
}
