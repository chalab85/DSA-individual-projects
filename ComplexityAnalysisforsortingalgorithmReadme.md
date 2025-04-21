##Complexity Analysis:
##Bubble Sort:

##Time Complexity: 
𝑂(𝑛2)  in all cases.

##Space Complexity: 
𝑂(1).

Suitable for small arrays.

##Quick Sort:

##Time Complexity:

Best and Average: 
𝑂(𝑛log𝑛).

Worst: 𝑂(𝑛2) (when pivot selection is poor).

##Space Complexity: 𝑂(log𝑛) (for recursion).

Efficient for large arrays.

##Merge Sort:

##Time Complexity: 𝑂(𝑛log𝑛  in all cases.

##Space Complexity: 
𝑂(𝑛) (due to auxiliary arrays).

Stable sorting algorithm.

##Running and Testing:
Use random or predefined values for the array.

Measure execution time for each sorting algorithm using std::chrono::high_resolution_clock.

Analyze sorted results and time taken for arrays of various sizes.

Summary of Findings:
Bubble Sort: Simple but inefficient for large datasets; performs well for small arrays.

Quick Sort: Fast for most cases but can degrade for poorly chosen pivot.

Merge Sort: Consistently fast and stable but uses extra memory.