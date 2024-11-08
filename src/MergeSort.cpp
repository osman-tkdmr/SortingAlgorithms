#include <iostream>
#include <vector>
#include "../include/MergeSort.h"



// Ýki sýralý diziyi birleþtiren yardýmcý fonksiyon
void MergeSort::merge(std::vector<int>& arr, int p, int q, int r) {
    int n1 = q - p + 1;  // Sol alt dizinin boyutu
    int n2 = r - q;      // Sað alt dizinin boyutu

    // Geçici dizileri oluþtur
    std::vector<int> L(n1);
    std::vector<int> R(n2);

    // Verileri geçici dizilere kopyala
    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[q + 1 + j];

    // Birleþtirme iþlemi
    int i = 0;  // Ýlk alt dizinin indeksi
    int j = 0;  // Ýkinci alt dizinin indeksi
    int k = p;  // Birleþtirilmiþ dizinin indeksi

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // L'de kalan elemanlarý kopyala
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // R'de kalan elemanlarý kopyala
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Recursive merge sort fonksiyonu
void MergeSort::mergeSort(std::vector<int>& arr, int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;  // Orta noktayý bul
        mergeSort(arr, p, q);     // Sol yarýyý sýrala
        mergeSort(arr, q + 1, r); // Sað yarýyý sýrala
        merge(arr, p, q, r);      // Sýralý alt dizileri birleþtir
    }
}

