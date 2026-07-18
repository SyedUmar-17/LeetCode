int maxValidPairSum(int* nums, int numsSize, int k) {
    int best = nums[0];
    int ans = 0;

    for (int j = k; j < numsSize; j++) {
        if (nums[j - k] > best)
            best = nums[j - k];

        if (best + nums[j] > ans)
            ans = best + nums[j];
    }

    return ans;
}