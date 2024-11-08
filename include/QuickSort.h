#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>

class QuickSort {
public:
    void quickSort(std::vector<int>& arr, int p, int r);

private:
    int partition(std::vector<int>& arr, int p, int r);
};

#endif

