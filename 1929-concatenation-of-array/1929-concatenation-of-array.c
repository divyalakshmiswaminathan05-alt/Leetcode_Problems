/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* arr, int n, int* returnSize) {
    arr=realloc(arr,2*n*sizeof(int));
    int idx=n,i=0;
    while(i<n){
        arr[idx++]=arr[i++];
    }
    *returnSize = n*2;
    return arr;
}