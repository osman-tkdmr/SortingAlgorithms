#include <iostream>
#include <vector>
#include "BubbleSort.h"
	
void BubbleSort::bubbleSort(std::vector<int>& arr){
	for(int i = 0; i < arr.size(); i++){
		for(int j = arr.size()-1; j > i; j--){
			if (arr[j] < arr[j-1])
				std::swap(arr[j], arr[j-1]);
		}
	}
}
