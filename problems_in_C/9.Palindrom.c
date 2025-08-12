char *putnbr(int x);

bool isPalindrome(int x) {
    char *number;
    int i = 0;

    if(x < 0)
        return false;
    else
        number = putnbr(x);
    while(i < strlen(number) / 2)
    {
        if(number[i] != number[strlen(number) - i - 1])
            return false;
        i++;
    }
    return true;
}

char *putnbr(int x)
{
    char *res;
    int i = 0;
    int n = x;

    while(n > 0)
    {
        i++;
        n = n / 10;
    }
    res = malloc(sizeof(char) * (i + 1));
    i = 0;
    while(x > 0)
    {
        res[i] = (x % 10) + 48;
        i++;
        x = x / 10;
    }
    res[i] = '\0';
    return res;
}