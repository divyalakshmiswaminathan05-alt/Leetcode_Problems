/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* A, int n, int* ansSize) {
    for(int i=n-1;i>=0;i--){
        if(A[i]<9){
            A[i]++;
            *ansSize=n;
            return A;
        }
        else
            A[i]=0;
    }
    int *ans=calloc(n+1,sizeof(int));
    ans[0]=1;
    *ansSize=n+1;
    return ans;
}