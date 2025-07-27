int removeElement(int* nums, int numsSize, int val) {
    int i = 0;
    int k = 0;
    
    while(i < numsSize)
    {
        k = i;
        while(k < numsSize && nums[k] == val)
            k++;
        if (k == numsSize)
            return i;
        else if(i != k)
        {
            nums[i] = nums[k];
            nums[k] = val;
        }
        i++;
    }
    return i;
}