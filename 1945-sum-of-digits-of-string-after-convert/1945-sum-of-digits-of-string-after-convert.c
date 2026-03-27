int getLucky(char* s, int k) {
    int n=0,sum=0;
for(int i=0;s[i]!='\0';i++){
   int temp=s[i]-'a'+1;
    while(temp>0){
        n+=temp%10;
        temp/=10;
    }
}
for(int i=1;i<k;i++){
    int ans=0;
while(n>0){
    ans+=n%10;
    n/=10;
    }
n=ans;
}
return n;
}