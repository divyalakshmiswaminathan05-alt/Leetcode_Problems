int findSpecialInteger(int* arr, int arrSize) {
    int c=1,val=arrSize/4;
    for(int i=1;i<arrSize;i++){
        if(arr[i]==arr[i-1])
            c++;
        else
            c=1;
        if(c>val)
        return arr[i];
    } 
    return arr[0];
}