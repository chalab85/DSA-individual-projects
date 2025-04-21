int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high)
        return -1; // Target not found

    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, high, target);
    else
        return binarySearchRecursive(arr, low, mid - 1, target);
}
