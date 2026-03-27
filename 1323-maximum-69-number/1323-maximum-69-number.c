int maximum69Number (int num) {
   int t=num,last=0,p=1;
   while(t>0){
    if(t%10==6) last=p;
    t/=10;
    p*=10;
   }
   return num+(3*last);
}