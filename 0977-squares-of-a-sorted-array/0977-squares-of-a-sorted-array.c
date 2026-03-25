/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* arr, int n, int* returnSize) {
    int *result=(int*)malloc(n*sizeof(int));
    int i=0,j=n-1,k=n-1;
    while(i<=j){
        int left=arr[i]*arr[i];
        int right=arr[j]*arr[j];
        if(left>right){
            result[k--]=left;
            i++;
        }
        else{
            result[k--]=right;
            j--;
        }
    }
    *returnSize=n;
    return result;
}