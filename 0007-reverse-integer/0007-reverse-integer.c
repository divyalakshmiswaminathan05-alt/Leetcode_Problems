int reverse(int x){
    long long int rev=0;
    while(x!=0){
    int digit=x%10;
    rev=(rev*10)+digit;
    x=x/10;
    }
    if(rev<INT_MIN || rev>INT_MAX)
    return 0;
    return (int)rev;
}