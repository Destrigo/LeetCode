int helper(int n)
{
    int tmp  = 0;
    while(n>0)
    {
        tmp = tmp + ((n%10)*(n%10));
        n = n / 10;
    }
    return tmp;
}

bool isHappy(int n) {
    int slow = n; 
    int fast = n;

    do
    {
        slow = helper(slow);
        fast = helper(helper(fast));
    }while(slow != fast);
    
    if(slow == 1)
        return true;
    else
        return false;
}