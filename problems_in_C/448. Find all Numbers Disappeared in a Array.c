/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int i = 0;
    int *map = (int*)calloc((numsSize + 1), sizeof(int));
    int *sol = (int*)calloc((numsSize + 1), sizeof(int));

    while(i < numsSize)
    {
        map[nums[i]] = 1;
        i++;
    }
    i = 1;
    int k = 0;
    while(i < (numsSize + 1))
    {
        if(map[i] == 0)
            sol[k++] = i;
        i++;
    }

    *returnSize = k;
    return sol;
}