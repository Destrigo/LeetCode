int mySqrt(int x) {
    long int num = 1;
    if (x == 0)
        return 0;
    while(num < x)
    {
        if(num*num <= x && (num+1)*(num+1)>x)
            return num;
        num++;
    }   
    return num;
}