/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i = 0;
    int j = 0;
    static int array[2];

    while(i < numsSize)
    {
        j = 0;
        while(j < numsSize)
        {
            if ((j != i) && ((nums[j] + nums[i]) == target))
            {
                array[0] = i;
                array [1] = j;
                *returnSize = 2;
                return (array);
            }
            j++;
        }
        i++;
    }
    *returnSize = 0;
    return NULL;
}