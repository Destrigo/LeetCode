/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
 int comp(const void* a, const void *b) {
    return (*(int*)a - *(int*)b);
 }
int** fourSum(int* nums, int numsSize, int target, int* returnSize, int** returnColumnSizes) {
    int** res = NULL;
    *returnSize = 0;

    qsort(nums, numsSize, sizeof(int), comp);

    for(int i = 0; i < numsSize - 3; i++)
    {
        if(i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < numsSize - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            long long newTarget = (long long)target - nums[i] - nums[j];
            int low = j + 1, high = numsSize - 1;
            while(low < high) {
                long long sum = (long long)nums[low] + nums[high];
                if(sum < newTarget) {
                    low++;
                } else if (sum > newTarget) {
                    high--;
                }    else {
                    (*returnSize)++;
                    res =(int**)realloc(res, (*returnSize) * sizeof(int*));
                    res[*returnSize - 1] = (int*)malloc(4 * sizeof(int*));
                    res[*returnSize - 1][0] = nums[i];
                    res[*returnSize - 1][1] = nums[j];
                    res[*returnSize - 1][2] = nums[low];
                    res[*returnSize - 1][3] = nums[high];
                    while(low < high && nums[low] == nums[low + 1]) low++;
                    while(low < high && nums[high] == nums[high - 1]) high--;
                    low++;
                    high--;
                }        
        }
    }
    }
    *returnColumnSizes = (int*)malloc(*returnSize * sizeof(int));
    for(int i = 0; i < *returnSize; i++) {
        (*returnColumnSizes)[i] = 4;
    }
    return res;
}