int removeDuplicates(int* nums, int numsSize) {
    int k = 0;
    int i = 1;
    int *array = malloc(sizeof(int) * numsSize);

    array[0] = nums[0];
    while(i < numsSize)
    {
        if(nums[i] != array[k])
        {    
            array[k+1] = nums[i];
            k++;
        }
        i++;
    }
    k++;
    i = 0;
    while(i < numsSize)
    {
        nums[i] = array[i];
        i++;
    }
    return k;
}