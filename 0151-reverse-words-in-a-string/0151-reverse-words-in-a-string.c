void removespace(char *s){
    int i,j;
    i=j=0;
    while(s[i]==' ') i++; //when the string has spaces at the front
    while(s[i]!='\0'){
        if(s[i]!=' ') {
            s[j++]=s[i];
        }
        else if(j>0 && s[j-1]!=' ') s[j++]=' ';
        i++;
    }
    while(j>0 && s[j-1]==' ')j--;
    s[j]='\0';

}
void reverse(char *s,int l,int r){
    while(l<r){
        char temp=s[l];
        s[l]=s[r];
        s[r]=temp;
        l++;
        r--;
    }
}
char* reverseWords(char* s) {
    removespace(s);
    int n=strlen(s);
    reverse(s,0,n-1);
    int start=0;
    int l,r;
    for(int i=0;i<=n;i++){
        if(s[i]=='\0' || s[i]==' '){
            l=start;
            r=i-1;
            reverse(s,l,r);
            start=i+1;
        }
    }
    return s;
    
}