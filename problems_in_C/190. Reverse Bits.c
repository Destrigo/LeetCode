int reverseBits(int n) {
    int rev = 0;
    int sh = 31;
    while(n)
    {
        rev = rev | (n&1) << sh--;
        n = n>>1;
    }
    return rev;
}