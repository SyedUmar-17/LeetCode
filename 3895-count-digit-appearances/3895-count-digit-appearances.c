int countDigitOccurrences(int* nums, int numsSize, int digit) {
    int count=0;
    for(int i=0;i<numsSize;i++){

        int num=nums[i];

        while(num>0){

            int last=num%10;
            if(last==digit){

                count++;
            }

            num/=10;
        }
    }

    return count;
}