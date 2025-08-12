int climbStairs(int n) {
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    
    int prev1 = 1;
    int prev2 = 2;
    int curr = 0;
    int i = 3;

    while(i <= n)
    {
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
        i++;
    }
    return curr;
}