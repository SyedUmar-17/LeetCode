/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* applyOperations(int* nums, int numsSize, int* returnSize) {

    *returnSize = numsSize;

    for(int i = 0; i < numsSize - 1; i++){
        if(nums[i] == nums[i + 1]){
            nums[i] *= 2;
            nums[i + 1] = 0;
        }
    }

    int j = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] != 0){
            nums[j++] = nums[i];
        }
    }

    while(j < numsSize){
        nums[j++] = 0;
    }

    return nums;
}