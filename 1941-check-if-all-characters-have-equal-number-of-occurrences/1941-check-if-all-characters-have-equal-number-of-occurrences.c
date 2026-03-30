bool areOccurrencesEqual(char* s) {
    int* F=calloc(26,sizeof(int));
    for(int i=0;s[i]!='\0';i++){
        int val=s[i]-'a';
        F[val]++;
    }
    int ans=F[s[0]-'a'];
    for(int j=0;j<26;j++){
        if(F[j]==0) continue;
        if(F[j]!=ans) return false;
    }
    return true;
}