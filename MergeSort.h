#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

class MergeSort {
public:
    void mergeSort(std::vector<int>& arr, int p, int r);
    void merge(std::vector<int>& arr, int p, int q, int r);
};

#endif

