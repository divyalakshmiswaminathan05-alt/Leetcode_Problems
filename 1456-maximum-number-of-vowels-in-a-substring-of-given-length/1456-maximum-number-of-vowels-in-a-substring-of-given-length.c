int isvowels(char c){
    return (c=='a'|| c=='e'|| c=='o'|| c=='i'|| c=='u') ;
}
int maxVowels(char* s, int k) {
    int len=strlen(s);
    int cnt=0;
    for(int i=0;i<k;i++){
        if(isvowels(s[i])) cnt++;
        
    }
    int maxcnt=cnt;
    for(int i=k;i<len;i++){
        if(isvowels(s[i])) cnt++;
        if(isvowels(s[i-k])) cnt--;

        if(cnt>maxcnt) maxcnt=cnt;
    }
    return maxcnt;

}