int largestAltitude(int* gain, int gainSize) {
    int val=0,max=0;
    for(int i=0;i<gainSize;i++){
        val+=gain[i];
        if(max<val)
        max=val;
        }
    return max;
}