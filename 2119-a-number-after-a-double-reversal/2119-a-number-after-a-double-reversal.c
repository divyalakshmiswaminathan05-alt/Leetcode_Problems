bool isSameAfterReversals(int num) {
    int d=1,i=1;
    int rev1=0,rev2=0;
    while(d<=num){
        int ed=(num%(d*10))/d;
        rev1=(rev1*10)+ed;
        d=d*10;
    }
    while(i<=rev1){
        int ed=(rev1%(i*10))/i;
        rev2=(rev2*10)+ed;
        i=i*10;
    }
    if(num==0)
    return true;
    else if(num==rev2)
        return true;
    else
    return false;

}