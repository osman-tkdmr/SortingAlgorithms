#include <iostream>
#include <vector>
#include "SelectionSort.h"
#include "QuickSort.h"
#include "MergeSort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"

void printArray(const std::vector<int>& arr) {
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}


int main() {
    std::vector<int> unsorting_arr = {12, 11, 13, 5, 6, 59, 3, 43, 10};
    
    SelectionSort ss;
    std::vector<int> arr = unsorting_arr;
	std::cout << "Selection Sort - Siralanmamis dizi: ";
	printArray(arr);
    ss.selectionSort(arr);
    std::cout << "Selection Sort - Siralanmis dizi:   ";
    printArray(arr);


    QuickSort qs;
    arr = unsorting_arr;
    std::cout << "Quick Sort - Siralanmamis dizi: ";
    printArray(arr);
    qs.quickSort(arr, 0, arr.size() - 1);
    std::cout << "Quick Sort - Siralanmis dizi:   ";
    printArray(arr);
    
    
    MergeSort ms;
    arr = unsorting_arr;
    std::cout << "Quick Sort - Siralanmamis dizi: ";
    printArray(arr);
    ms.mergeSort(arr, 0, arr.size() - 1);
    std::cout << "Quick Sort - Siralanmis dizi:   ";
    printArray(arr);

    return 0;
}

