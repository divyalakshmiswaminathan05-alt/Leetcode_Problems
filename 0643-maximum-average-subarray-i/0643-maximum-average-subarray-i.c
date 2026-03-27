double findMaxAverage(int* A, int n, int k) {
    double sum=0,max;
    for(int i=0;i<k;i++){
        sum+=A[i];
    }
    max=sum;
    int st=1,end=k;
    while(end<n){
        sum=sum-A[st-1]+A[end];
        if(max<sum)
        max=sum;
        st++;
        end++;
    }
    return max/k;
}