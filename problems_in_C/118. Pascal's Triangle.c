int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int i = 0;
    int k = 0;
    int num;
    int **sol = (int **)malloc(sizeof(int *) * numRows);

    *returnColumnSizes = malloc(sizeof(int *) * numRows);
    *returnSize = numRows;

    while(i < numRows)
    {
        k = 0;
        num = 1;
        
        (*returnColumnSizes)[i] = i + 1;
        sol[i] = (int *)malloc(sizeof(int) * (i+1));
        
        while(k < i+1)
        {
            sol[i][k] = num;
            num = num *(i - k) / (k + 1);
            k++;
        }
        i++;
    }
    return sol;
}