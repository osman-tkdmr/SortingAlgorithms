#include <iostream>
#include <vector>
#include "../include/MergeSort.h"



// �ki s�ral� diziyi birle�tiren yard�mc� fonksiyon
void MergeSort::merge(std::vector<int>& arr, int p, int q, int r) {
    int n1 = q - p + 1;  // Sol alt dizinin boyutu
    int n2 = r - q;      // Sa� alt dizinin boyutu

    // Ge�ici dizileri olu�tur
    std::vector<int> L(n1);
    std::vector<int> R(n2);

    // Verileri ge�ici dizilere kopyala
    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[q + 1 + j];

    // Birle�tirme i�lemi
    int i = 0;  // �lk alt dizinin indeksi
    int j = 0;  // �kinci alt dizinin indeksi
    int k = p;  // Birle�tirilmi� dizinin indeksi

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

    // L'de kalan elemanlar� kopyala
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // R'de kalan elemanlar� kopyala
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Recursive merge sort fonksiyonu
void MergeSort::mergeSort(std::vector<int>& arr, int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;  // Orta noktay� bul
        mergeSort(arr, p, q);     // Sol yar�y� s�rala
        mergeSort(arr, q + 1, r); // Sa� yar�y� s�rala
        merge(arr, p, q, r);      // S�ral� alt dizileri birle�tir
    }
}

