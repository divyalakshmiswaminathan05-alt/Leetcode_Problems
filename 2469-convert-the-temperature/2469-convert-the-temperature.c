/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    double *ans=malloc(2*sizeof(double));
    for(int i=0;i<2;i++){
        ans[i++]=celsius+273.15;
        ans[i++]=celsius*1.80+32.00;
    }
    *returnSize=2;
    return ans;
}