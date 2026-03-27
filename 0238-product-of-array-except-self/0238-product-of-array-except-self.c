int* productExceptSelf(int* a, int n, int* returnSize) {
    int *ans=(int*)malloc(n*sizeof(int));
    ans[0]=1;
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*a[i-1];
    }
    int right=1;
    for(int i=n-1;i>=0;i--){
        ans[i]=ans[i]*right;
        right*=a[i];
    }
    *returnSize=n;
    return ans;
}