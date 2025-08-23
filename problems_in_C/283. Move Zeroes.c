void moveZeroes(int* nums, int numsSize) {
    int i = 0;
    int k = 0;
    while(i < numsSize)
    {
        k = i;
        if(nums[i] == 0)
        {
            while(k < numsSize && nums[k] == 0)
                k++;
            if(k < numsSize)
            {nums[i] = nums[k];
            nums[k] = 0;}
        }
        i++;
    }
}