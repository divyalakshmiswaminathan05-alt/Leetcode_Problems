int lengthOfLongestSubstring(char* s) {
    int freq[256]={0};
    int l,r,len,max;
    l=r=len=max=0;
    while(s[r]!='\0'){
        freq[s[r]]++;
        while(freq[s[r]]>1){
            freq[s[l]]--;
            l++;
        }
        len=r-l+1;
        if(len>max)max=len;
        r++;
    }
    return max;
}