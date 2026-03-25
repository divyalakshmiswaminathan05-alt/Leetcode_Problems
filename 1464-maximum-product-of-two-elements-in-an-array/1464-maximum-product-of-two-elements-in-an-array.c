int maxProduct(int* nums, int numsSize) {
    int max1=nums[0],max2=0;
    for(int i=1;i<numsSize;i++){
        if(max1<=nums[i]){
            max2=max1;
            max1=nums[i];
        }
        else if(max2<nums[i]){
            max2=nums[i];
        }
    }
    return (max1-1)*(max2-1);
}