int abs(int x)
{
    if (x > 0)
        return x;
    return (x * (-1));
}
int comp(const void* a, const void* b) {
  	
  	// If a is smaller, positive value will be returned
    return (*(int*)a - *(int*)b);
}

int threeSumClosest(int* nums, int numsSize, int target) {
    int n = numsSize;

    qsort(nums, n, sizeof(int), comp);

    int closestSum = nums[0] + nums[1] + nums[2];
    if (n == 3)
        return closestSum;

    for (int i = 0; i < n - 2; i++)
    {
        int left = i + 1;
        int right = n - 1;
        while(left < right)
        {
            int currentSum = nums[i] + nums[left] + nums[right];
            if(currentSum == target)
                return target;
            
            if (abs(currentSum - target) < abs(closestSum - target))
                closestSum = currentSum;

            if (currentSum < target)
                left++;
            else
                right--;
        }
    }  
    return closestSum;
}