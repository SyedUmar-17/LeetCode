bool check(int* nums, int numsSize) {
    int drop=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]>nums[(i + 1) % numsSize]){
            drop++;
        }
        if(drop>1){
            return false;
        }
    }
    return true;

}