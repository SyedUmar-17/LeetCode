bool isMiddleElementUnique(int* nums, int numsSize) {
    int target=nums[numsSize/2];
    int count=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==target){
            count++;
        }
    }
    return count==1;
}