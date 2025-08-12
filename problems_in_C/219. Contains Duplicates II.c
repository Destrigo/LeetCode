struct node {
    int val;
    int index;
};

int md_comparator(const void *v1, const void *v2)
{
    const struct node *p1 = (struct node *)v1;
    const struct node *p2 = (struct node *)v2;
    if (p1->val < p2->val)
        return -1;
    else if (p1->val > p2->val)
        return +1;
    else
        return 0;
}

bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    
    struct node dict[numsSize];
    int i = 0;
    while(i < numsSize) 
    {
        dict[i].val = nums[i];
        dict[i].index = i;
        i++;
    }
    
    qsort(dict, numsSize, sizeof(struct node), md_comparator);

    i = 0;
    while (i < (numsSize - 1)) 
    {
        if(dict[i].val == dict[i+1].val) {
            if ((dict[i+1].index - dict[i].index) <= k)
                return true;
        }
        i++;
    }

    return false;
}