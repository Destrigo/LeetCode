int addDigits(int num) {
    int sol = num;
    int tmp = 0;
    while(num > 9)
    {
        sol = 0;
        tmp = num;
        while(tmp > 0)
        {
            sol = sol + tmp % 10;
            tmp = tmp / 10;
        }
        num = sol;
    }
    return sol;
}