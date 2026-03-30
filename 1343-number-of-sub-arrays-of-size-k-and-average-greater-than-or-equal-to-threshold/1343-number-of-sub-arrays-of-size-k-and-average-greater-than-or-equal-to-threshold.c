int numOfSubarrays(int* A, int n, int k, int threshold) {
    int c=0,sum=0;
 for(int i=0;i<k;i++){
    sum+=A[i];
     }
int val=sum/k;
 if(val>=threshold) c++;
 int st=1,end=k;
 while(end<n){
    sum=sum-A[st-1]+A[end];
   int avg=sum/k;
    if(avg>=threshold) c++;
    st++;
    end++;
 } return c;
}