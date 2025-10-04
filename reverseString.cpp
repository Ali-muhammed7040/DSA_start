int findMax(int arr[], int n) {
    if (n == 1)  // base case
        return arr[0];
    
    int maxOfRest = findMax(arr, n - 1);
    return (arr[n - 1] > maxOfRest) ? arr[n - 1] : maxOfRest;
}