int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int missingNumber(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), comp);

    int i = 0;
    if(nums[0] == 1)
        return 0;
    
    while(i < (numsSize - 1))
    {
        if(nums[i + 1]- nums[i] != 1)
            return (nums[i] + 1);
        i++;
    }
    return numsSize; 
}