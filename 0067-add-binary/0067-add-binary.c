char* addBinary(char* a, char* b) {
    int i=strlen(a)-1;
    int j=strlen(b)-1;
    int carry=0;
    int maxlen=(strlen(a)>strlen(b)?strlen(a):strlen(b))+2;
    char* res=(char*) malloc(maxlen);
    int k=maxlen-2;
    res[maxlen-1]='\0';
    while(i>=0|| j>=0|| carry){
        int sum=carry;
        if(i>=0) sum=sum+a[i--]-'0';
        if(j>=0) sum=sum+b[j--]-'0';
        res[k--]=(sum%2)+'0';
        carry=sum/2;
    }
    return res+k+1;
}