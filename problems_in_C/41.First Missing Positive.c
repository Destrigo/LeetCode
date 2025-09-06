int comp(const void *a, const void *b) {
    return (*(unsigned int *)a - *(unsigned int *)b);
}

int firstMissingPositive(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), comp);
    int k = 1;
    for(int i = 0; i < numsSize; i++)
    {
        while(i >= 1 && i < numsSize && nums[i] == nums[i-1])
            i++;
        if(i < numsSize && nums[i] > 0 && nums[i] != k)
            return k;
        if(i < numsSize && nums[i] > 0 && nums[i] == k)
            k++;
        
    }
    return k;
}