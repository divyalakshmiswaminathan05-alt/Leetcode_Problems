int findNumbers(int* a, int n) {
    int c=0;
    for(int i=0;i<n;i++){
        int val=a[i],cv=0;
        while(val!=0){
        int d=val%10;
        val=val/10;
        cv++;
        }
        if(cv%2==0)
         c++;
    }
    return c;
}