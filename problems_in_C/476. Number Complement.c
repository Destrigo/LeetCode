int findComplement(int num) {
    int i = 0;
    int res = num;
    
    while(res>0)
    {
        i = (i<<1) | 1;
        res>>=1;
    }

    return num ^ i;
}