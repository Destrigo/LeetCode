int hammingWeight(int n) {
    int sol = 0;
    while(n)
    {
        n &= (n-1);
        sol++;
    }
    return sol;
}