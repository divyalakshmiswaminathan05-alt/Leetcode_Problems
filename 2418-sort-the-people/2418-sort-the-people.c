/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void swapint(int *start,int *end){
    int temp=*start;
    *start=*end;
    *end=temp;
    }
 
 void swapstr(char **start,char **end){
    char *temp=*start;
    *start=*end;
    *end=temp;
    }
char** sortPeople(char** names, int n, int* heights, int h, int* returnSize) {
    for(int i=0;i<h;i++){
        for(int j=i+1;j<n;j++){
        if(heights[i]<heights[j]){
            swapint(&heights[i],&heights[j]);
            swapstr(&names[i],&names[j]);
        }
    }
}
*returnSize=n;
return names;
}