int longestPalindrome(char* s) {
    int n=strlen(s);
    if(n==1) return 1;
    int freq[256]={0};
    int c,odd;
    c=odd=0;
    for(int i=0;s[i]!='\0';i++){
        freq[s[i]]++;
    }
    for(int i=0;i<256;i++){
        c+=(freq[i]/2)*2;
        if(freq[i]%2==1)
            odd=1;
    }
    if(odd) c+=1;
    return c;


}