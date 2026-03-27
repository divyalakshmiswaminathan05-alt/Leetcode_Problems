int pivotIndex(int* A, int n) {
    int ls=0,rs=0,total=0;
    for(int i=0;i<n;i++){
        total+=A[i];
    }
    for(int i=0;i<n;i++){
        rs=total-ls-A[i];
        if(ls==rs)
            return i;

        ls+=A[i];
    }
    return -1;
}
