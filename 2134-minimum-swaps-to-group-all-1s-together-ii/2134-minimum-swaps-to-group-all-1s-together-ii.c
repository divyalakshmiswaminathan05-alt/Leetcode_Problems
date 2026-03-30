int minSwaps(int* A, int n) {
    int gcnt=0,bcnt=0,min=0;
    for(int i=0;i<n;i++){
        if(A[i]==1) gcnt++;
    }
    for(int i=0;i<gcnt;i++){
        if(A[i]==0)bcnt++;
    }
    if (bcnt==0) return 0;
    min=bcnt;
    int st=1,end=gcnt;
    while(st<n){
        if(A[st-1]==0) bcnt--;
        if(A[end%n]==0) bcnt++;
        if(bcnt==0) return 0;
        if(bcnt<min) min=bcnt;
        st++;
        end++;
    }
    return min;
}