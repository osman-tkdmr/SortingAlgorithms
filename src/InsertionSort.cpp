#include <iostream>
#include <vector>
#include "../include/InsertionSort.h"


void InsertionSort::insertionSort(std::vector<int>& arr) {
    for(int j = 1; j < arr.size(); j++) {
        int key = arr[j];
        int i = j - 1;
        while(i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }
}
