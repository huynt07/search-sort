# 🔍 Searching & Sorting Algorithms in C++

A collection of common **Searching** and **Sorting** algorithms implemented in **C++** for learning Data Structures and Algorithms (DSA).

## 📌 Overview

This repository contains implementations of popular searching and sorting algorithms with clean, easy-to-read C++ code.

Each source file focuses on one algorithm and includes comments about its time complexity and space complexity.

## 📂 Project Structure

```text
.
├── binarysearch.cpp
├── bubblesort.cpp
├── countingsort.cpp
├── heapsort.cpp
├── insertionsort.cpp
├── jumpsearch.cpp
├── linear-sequentialsearch.cpp
├── mergesort.cpp
├── quicksort.cpp
├── radixsort.cpp
├── selectionsort.cpp
└── README.md
```

---

# 🔎 Searching Algorithms

| Algorithm | Sorted Array Required | Time Complexity | Space |
|-----------|:---------------------:|:---------------:|:-----:|
| Linear Search | ❌ | O(n) | O(1) |
| Binary Search | ✅ | O(log n) | O(1) |
| Jump Search | ✅ | O(√n) | O(1) |

---

# 📊 Sorting Algorithms

| Algorithm | Best | Average | Worst | Space | Stable |
|-----------|:----:|:-------:|:-----:|:-----:|:------:|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) | ✅ |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) | ❌ |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) | ✅ |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) | ✅ |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) | ❌ |
| Heap Sort | O(n log n) | O(n log n) | O(n log n) | O(1) | ❌ |
| Counting Sort | O(n + k) | O(n + k) | O(n + k) | O(n + k) | ✅ |
| Radix Sort | O(d(n + k)) | O(d(n + k)) | O(d(n + k)) | O(n + k) | ✅ |

> **k**: Range of input values  
> **d**: Number of digits

---

# 🚀 Compile

Using **g++**

```bash
g++ filename.cpp -o program
```

Example:

```bash
g++ binarysearch.cpp -o binarysearch
```

Run:

### Windows

```bash
binarysearch.exe
```

### Linux / macOS

```bash
./binarysearch
```

---

# 🎯 Learning Objectives

- Understand searching algorithms
- Understand sorting algorithms
- Compare algorithm performance
- Practice implementing DSA in C++

---

# 💻 Language

- C++

---

# 👨‍💻 Author

*Nguyễn Thanh Huy*

- GitHub: https://github.com/huynt07

---

## ⭐ If you find this repository useful, don't forget to give it a star!
