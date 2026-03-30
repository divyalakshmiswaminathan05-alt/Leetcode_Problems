int sumOfUnique(int* A, int n) {
    int* F=calloc(101,sizeof(int));
    for(int i=0;i<n;i++){
        int val=A[i];
        F[val]++;
    }
    int sum=0,cnt=0;
    for(int i=0;i<101;i++){
        if(F[i]==1) sum+=i;
    }
    return sum;
}