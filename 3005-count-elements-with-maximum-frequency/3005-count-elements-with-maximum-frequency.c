int maxFrequencyElements(int* A, int n) {
    int* F=calloc(101,sizeof(int));
    for(int i=0;i<n;i++){
        int val=A[i];
        F[val]++;
    }
    int cnt=0, maxcnt=0;
    for(int j=0;j<101;j++){
        if(maxcnt<F[j]){
            maxcnt=F[j];
        }
    }
    for(int i=0;i<101;i++){
        if(maxcnt==F[i])
        cnt+=F[i];
    }
    return cnt;

}