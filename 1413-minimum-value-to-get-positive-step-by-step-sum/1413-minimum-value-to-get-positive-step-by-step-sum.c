int minStartValue(int* nums, int numsSize) {
    int sum = 0;
    int minSum = 0;

    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];

        if (sum < minSum) {
            minSum = sum;
        }
    }

    return 1 - minSum;
}