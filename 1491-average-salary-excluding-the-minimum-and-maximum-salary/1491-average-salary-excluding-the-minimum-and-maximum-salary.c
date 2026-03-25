int max(int*salary,int salarySize){
   int ma=salary[0];
    for(int i=0;i<salarySize;i++){
        if(ma<salary[i]){
            ma=salary[i];
        }
    }
    return ma;
}
int min(int*salary,int salarySize){
   int mi=salary[0];
    for(int i=0;i<salarySize;i++){
        if(mi>salary[i]){
            mi=salary[i];
        }
    }
    return mi;
}
double average(int* salary, int salarySize) {
    double ans=0;
    int c=salarySize-2;
    int maximum=max(salary,salarySize);
    int minimum=min(salary,salarySize);
    for(int i=0;i<salarySize;i++){
        if(salary[i]!=maximum && salary[i]!=minimum){
            ans+=salary[i];
        }
    }
    return (ans/c);

}