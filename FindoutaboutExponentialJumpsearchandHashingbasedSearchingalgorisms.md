##Exponential Search
How It Works:
Exponential Search is a searching algorithm designed for sorted arrays. It works by identifying the range where the target element might exist through exponential jumps (e.g., 1, 2, 4, 8, etc.). Once the range is found, Binary Search is applied within that range to locate the target element. This combination of exponential jumps and Binary Search makes Exponential Search efficient for sorted datasets.

##Steps:

Start by comparing the first element of the array with the target. If it matches, return the index.

Initialize a variable i to 1 and compare the element at index i with the target.

If the element does not match, double the value of i (i.e., jump exponentially) and repeat the comparison.

Stop when the element at index i exceeds the target or when i exceeds the size of the array.

Perform Binary Search within the range [i/2, min(i, n-1)] to find the target.

##Complexity Analysis:

##Time Complexity:

Best Case: O(1) (if the target is at the first position).

Average/Worst Case: O(log n) (due to the Binary Search step).

Space Complexity: O(1), as no additional memory is required.

##Jump Search
How It Works:
Jump Search is another algorithm designed for sorted arrays. It divides the array into blocks of size √n and jumps through these blocks to find the range where the target might exist. Once the range is identified, Linear Search is performed within the block to locate the target element.

##Steps:

Divide the array into blocks of size √n.

Start at the first block and compare the last element of the block with the target.

If the target is greater, jump to the next block.

Stop when the last element of the current block exceeds the target or when the end of the array is reached.

Perform Linear Search within the identified block to find the target.

##Complexity Analysis:

##Time Complexity:

Best Case: O(1) (if the target is at the first position).

Average/Worst Case: O(√n), as the algorithm performs √n jumps and up to √n comparisons within a block.

Space Complexity: O(1), as no additional memory is required.

##Hashing-Based Search
How It Works:
Hashing is a technique used for fast lookups in datasets. It uses a hash function to map keys to indices in a hash table. This allows for constant-time access to elements. Collisions (when two keys map to the same index) are handled using techniques like chaining or open addressing.

##Steps:

Create a hash table and define a hash function to map keys to indices.

Insert elements into the hash table using the hash function.

To search for an element, compute its hash value and check the corresponding index in the hash table.

If collisions occur, resolve them using chaining (linked lists) or open addressing (probing).

##Complexity Analysis:

##Time Complexity:

Best Case: O(1) (for successful search without collisions).

Worst Case: O(n) (if all elements collide and are stored in a single chain).

Space Complexity: O(n), as additional memory is required for the hash table.

##Summary of Findings
Exponential Search:

Efficient for sorted arrays.

Combines exponential jumps with Binary Search for logarithmic time complexity.

Suitable for datasets where the target is likely to be near the beginning.

Jump Search:

Optimized for sorted arrays with a time complexity of O(√n).

Useful when Binary Search is not feasible or when the dataset is relatively small.

Hashing-Based Search:

Ideal for fast lookups with average-case constant time complexity.

Requires additional memory for the hash table and careful handling of collisions.

Best suited for scenarios requiring unordered, frequent searches.