int arrangeCoins(int n) {
    int k = 0;
    if(n == 0)
        return 0;

    while(n > k)
    {
        k++;
        n = n - k;
    }
    return k;
}