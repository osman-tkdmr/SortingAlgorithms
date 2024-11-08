#include <iostream>
#include <vector>
#include "../include/QuickSort.h"


// Partition i�lemi: Pivot se�imi ve elemanlar�n d�zenlenmesi
int QuickSort::partition(std::vector<int>& arr, int p, int r) {
    int x = arr[r];    // Pivot olarak son eleman se�ilir
    int i = p - 1;     // K���k elemanlar i�in index
    
    // p'den r-1'e kadar olan elemanlar� kontrol et
    for (int j = p; j < r; j++) {
        // E�er current eleman pivottan k���kse
        if (arr[j] <= x) {
            i++;
            // arr[i] ile arr[j]'yi takas et
            std::swap(arr[i], arr[j]);
        }
    }
    // Pivot'u do�ru pozisyona yerle�tir
    std::swap(arr[i + 1], arr[r]);
    return i + 1;
}

// Ana QuickSort fonksiyonu
void QuickSort::quickSort(std::vector<int>& arr, int p, int r) {
    if (p < r) {
        // Partition i�lemi ile pivot'u yerle�tir
        int q = partition(arr, p, r);
        // Sol yar�y� s�rala
        quickSort(arr, p, q - 1);
        // Sa� yar�y� s�rala
        quickSort(arr, q + 1, r);
    }
}
