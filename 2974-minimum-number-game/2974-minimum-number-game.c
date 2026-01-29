/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int cmp(const void* a,const void*b){
    return (*(int*)a - *(int*)b);
 }
int* numberGame(int* nums, int numsSize, int* returnSize) {
    qsort(nums,numsSize,sizeof(int),cmp);
    int* arr=(int*)(malloc(numsSize * sizeof(int)));
    *returnSize=numsSize;

    int k=0;
    for(int i=0;i<numsSize;i+=2){
        arr[k++]=nums[i+1];
        arr[k++]=nums[i];
    }
    return arr;
}