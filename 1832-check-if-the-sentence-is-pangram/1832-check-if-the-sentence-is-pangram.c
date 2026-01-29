bool checkIfPangram(char* sentence) {
    int seen[26]={0};
    for(int i=0;sentence[i]!='\0';i++){
        seen[sentence[i]-'a']=1;
        
    }
    for(int i=0;i<26;i++){
        if(seen[i]==0){
            return false;
        }
    }
        
            return true;
        
    
}