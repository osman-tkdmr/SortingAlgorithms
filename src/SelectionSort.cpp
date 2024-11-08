#include "../include/SelectionSort.h"
#include <iostream>
#include <algorithm>

void SelectionSort::selectionSort(std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        int min = i;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            std::swap(arr[i], arr[min]);
        }
    }
}
