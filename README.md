# Sorting Algorithms Repository

Welcome to the **Sorting Algorithms Repository**, a collection of popular sorting algorithms implemented in C++! This repository is designed for students, developers, and enthusiasts who want to explore, compare, and understand how different sorting techniques work.

---

## 📂 Project Structure

The repository is organized as follows:

```
src/
|-- main.cpp             # Entry point to test sorting algorithms
|-- SelectionSort.cpp    # Implementation of Selection Sort
|-- QuickSort.cpp        # Implementation of Quick Sort
|-- MergeSort.cpp        # Implementation of Merge Sort
|-- InsertionSort.cpp    # Implementation of Insertion Sort
|-- CountingSort.cpp     # Implementation of Counting Sort
|-- BubbleSort.cpp       # Implementation of Bubble Sort

include/
|-- SelectionSort.h      # Header for Selection Sort
|-- QuickSort.h          # Header for Quick Sort
|-- MergeSort.h          # Header for Merge Sort
|-- InsertionSort.h      # Header for Insertion Sort
|-- CountingSort.h       # Header for Counting Sort
|-- BubbleSort.h         # Header for Bubble Sort
```

---

## 🚀 Getting Started

### Prerequisites

- **C++ Compiler**: Ensure you have a modern C++ compiler installed (e.g., g++, clang).
- **Build System**: Recommended to use `make` for ease of building the project.

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/osman-tkdmr/SortingAlgorithms.git
   cd SortingAlgorithms
   ```
2. Build the project:
   ```bash
   make
   ```

3. Run the program:
   ```bash
   ./sorting
   ```

---

## 📜 Available Algorithms

Each algorithm is implemented in its own file and follows the single-responsibility principle. Below are brief descriptions:

### 1. Selection Sort
- **Description**: Repeatedly selects the smallest element from the unsorted portion and moves it to the sorted portion.
- **Time Complexity**: O(n²)

### 2. Quick Sort
- **Description**: Divides the array into smaller sub-arrays around a pivot and recursively sorts them.
- **Time Complexity**: O(n log n) (average case)

### 3. Merge Sort
- **Description**: Divides the array into halves, sorts them, and merges them back together.
- **Time Complexity**: O(n log n)

### 4. Insertion Sort
- **Description**: Builds the sorted array one element at a time by inserting elements into their correct positions.
- **Time Complexity**: O(n²)

### 5. Counting Sort
- **Description**: Counts the occurrences of each element and uses it to place elements in sorted order (only works for integers).
- **Time Complexity**: O(n + k)

### 6. Bubble Sort
- **Description**: Repeatedly swaps adjacent elements if they are in the wrong order.
- **Time Complexity**: O(n²)

---

## 🌟 Features

- Modular implementation with separate headers and source files.
- Easy to test and extend with new sorting algorithms.
- Educational comments included for better understanding.

---

## 📊 How to Test

Modify the `main.cpp` file to:

- Choose specific sorting algorithms to test.
- Provide custom input arrays.
- Compare performance for different input sizes.

Example snippet from `main.cpp`:
```cpp
#include "SelectionSort.h"
#include "QuickSort.h"
#include <vector>
#include <iostream>

int main() {
    std::vector<int> data = {64, 34, 25, 12, 22, 11, 90};

    // Test Quick Sort
    QuickSort(data);
    std::cout << "Sorted using Quick Sort: ";
    for (int num : data) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
```

---

## 🤝 Contributions

Contributions are welcome! Feel free to:
- Open an issue for bugs or suggestions.
- Submit a pull request with new features or algorithms.

---

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## 🧑‍💻 Author

- **Osman Tekdamar**  
  [GitHub](https://github.com/osman-tkdmr) | [LinkedIn](https://linkedin.com/in/osman-tekdamar)

---

## 💡 Inspiration

This repository aims to serve as a learning resource for anyone interested in algorithms and data structures. Happy coding! 🎉

