int numIdenticalPairs(int* A, int n) {
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(A[i]==A[j])
            c++;
        }
    }
    return c;
}