int maxProfit(int* p, int psize) {
    int buy=p[0],max=0;
    for(int i=1;i<psize;i++){
        if(buy>p[i]){
            buy=p[i];
         }
         else{
            int val=p[i]-buy;
            if(max<val)
                max=val;
           }
    }
    return max;
}