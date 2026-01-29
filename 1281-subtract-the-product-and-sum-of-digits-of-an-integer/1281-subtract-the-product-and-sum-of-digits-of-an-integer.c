int subtractProductAndSum(int n) {
    int sum=0;
    int pro=1;
    while(n!=0){
        int rem=n%10;
        sum=sum+rem;
        pro=pro*rem;
        n=n/10;
    }
    int result=pro-sum;
    return result;
}