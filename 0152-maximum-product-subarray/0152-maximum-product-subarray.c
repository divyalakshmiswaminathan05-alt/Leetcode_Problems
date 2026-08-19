int max(int a,int b){
    return (a>b?a:b);
}
int min(int a,int b){
    return (a<b?a:b);
}
int maxProduct(int* arr, int n) {
    int cmax=arr[0];
    int cmin=arr[0];
    int maxp=arr[0];
    for(int i=1;i<n;i++){
        int a=cmax*arr[i];
        int b=cmin*arr[i];
        cmax=max(arr[i],max(a,b));
        cmin=min(arr[i],min(a,b));
        maxp=max(maxp,cmax);
    }
    return maxp;
}