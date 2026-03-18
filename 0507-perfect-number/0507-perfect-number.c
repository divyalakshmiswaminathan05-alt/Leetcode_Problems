bool checkPerfectNumber(int n) {
    int sum=1;
    for(int i=2;i<=n/i;i++){
            if(n%i==0){
                if(i==n/i)
                    sum=sum+i;
                else
                    sum=sum+i+(n/i);
            }
           
 }
 if (n==1)
 sum=0;
  if (sum==n)
            return true;
            else
            return false;
}
