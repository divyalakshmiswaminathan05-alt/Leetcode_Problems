int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    int counthrs=0;
    int lesshrs=0;
    for(int i=0;i<hoursSize;i++){
        counthrs++;
        if(hours[i]<target){
         lesshrs++;   
        }
    }
    int mettarget=counthrs-lesshrs;
    return mettarget;
}