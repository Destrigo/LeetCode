/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    int k = 0;
    long int num = 1;
    int *sol = malloc(sizeof(long int) * (rowIndex + 1));

    *returnSize = rowIndex+1;

    while(k < rowIndex+1)
    {
        sol[k] = num;
        num = num *(rowIndex - k) / (k + 1);
        k++;
    }

    return sol;  
}