int cmp(const void *a,const void *b){
    return *(int*)a -*(int*)b; 
}

int longestConsecutive(int* arr, int n) {
    if (n==0) return 0;
    qsort(arr,n,sizeof(int),cmp);
    int c=1;
    int max=1;
    for(int i=1;i<n;i++){
        int diff=arr[i]-arr[i-1];
        if(diff==1) {
            c++;
            if(c>max) max=c;
            }
        else if(diff==0) continue;// there is a duplicate num
        else{
            c=1;
        }
    }
    return max;
}