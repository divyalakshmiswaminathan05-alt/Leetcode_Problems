void reverse(int *arr,int a,int b){
    while(a<b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
    a++;
    b--;
    }
}
void nextPermutation(int* arr, int n) {
    int pivot=-1;
    for(int i=n-1; i>0; i--){
        if(arr[i-1]<arr[i]){
            pivot = i-1;
            break;
        }
    }
    if(pivot==-1)
    {
        reverse(arr,0,n-1);
        return;
    }
    for(int j=n-1;j>pivot;j--){
        if(arr[j]>arr[pivot]){
            int temp=arr[j];
            arr[j]=arr[pivot];
            arr[pivot]=temp;
            break;
        }
        
    }
    reverse(arr,pivot+1,n-1);
}