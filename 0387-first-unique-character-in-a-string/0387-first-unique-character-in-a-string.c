int firstUniqChar(char* s) {
    int freq[26]={0};
    for(int i=0;s[i]!='\0';i++){
        freq[s[i]-'a']++;
    }

        for(int j=0;s[j]!='\0';j++){
            if(freq[s[j]-'a']==1){
            return j;
        }
        
        
        }
    
        return -1;
    }
