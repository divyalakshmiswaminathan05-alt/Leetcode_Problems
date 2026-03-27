int maxScore(char* s) {
    int len=strlen(s);
    int pf[len];
    pf[0]=(s[0]=='0'?1:0);
    for(int i=1;i<len;i++){
        pf[i]=pf[i-1]+(s[i]=='0'?1:0);
    }
    int sf[len];
    sf[len-1]=s[len-1]-'0';
    for(int i=len-2;i>=0;i--){
        sf[i]=sf[i+1]+s[i]-'0';
    }
    int max=0,val,j=0;
    while(j<len-1){
        val=pf[j]+sf[j+1];
        if(max<val)
        max=val;
        j++;
    }
    return max;
}

