int* shuffle(int* nums, int numsSize, int n, int* returnSize){
int p1=0,p2=n,i=0;
int *result=malloc(2*n*sizeof(int));
while(p1<n){
    result[i++]=nums[p1++];
    result[i++]=nums[p2++];
}
*returnSize=2*n;
return result;
}