int* runningSum(int* arr, int n, int* returnSize) {
    for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    *returnSize=n;
    return arr;
}