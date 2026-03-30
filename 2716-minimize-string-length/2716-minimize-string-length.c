int minimizedStringLength(char* s) {
    int len=strlen(s);
    int* F=calloc(26,sizeof(int));
    for(int i=0;s[i]!='\0';i++){
        int val=s[i]-'a';
        F[val]=1;
    }
    int cnt=0;
    for(int j=0;j<26;j++){
        cnt+=F[j];
    }
    return cnt;
}