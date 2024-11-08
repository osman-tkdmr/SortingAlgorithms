#include <iostream>
#include <vector>
#include "../include/QuickSort.h"


// Partition iþlemi: Pivot seçimi ve elemanlarýn düzenlenmesi
int QuickSort::partition(std::vector<int>& arr, int p, int r) {
    int x = arr[r];    // Pivot olarak son eleman seçilir
    int i = p - 1;     // Küçük elemanlar için index
    
    // p'den r-1'e kadar olan elemanlarý kontrol et
    for (int j = p; j < r; j++) {
        // Eðer current eleman pivottan küçükse
        if (arr[j] <= x) {
            i++;
            // arr[i] ile arr[j]'yi takas et
            std::swap(arr[i], arr[j]);
        }
    }
    // Pivot'u doðru pozisyona yerleþtir
    std::swap(arr[i + 1], arr[r]);
    return i + 1;
}

// Ana QuickSort fonksiyonu
void QuickSort::quickSort(std::vector<int>& arr, int p, int r) {
    if (p < r) {
        // Partition iþlemi ile pivot'u yerleþtir
        int q = partition(arr, p, r);
        // Sol yarýyý sýrala
        quickSort(arr, p, q - 1);
        // Sað yarýyý sýrala
        quickSort(arr, q + 1, r);
    }
}
