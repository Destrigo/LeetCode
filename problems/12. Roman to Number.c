int rules(char s)
{
    if(s == 'I')
        return 1;
    if(s == 'V')
        return 5;
    if(s == 'X')
        return 10;
    if(s == 'L')
        return 50;
    if(s == 'C')
        return 100;
    if(s == 'D')
        return 500;
    if(s == 'M')
        return 1000;
    return 0;
}

int romanToInt(char* s) {
    int num = 0;
    int fin = strlen(s) - 1;
    int second;
    int prev;
    while(fin >= 0)
    {
        second = rules(s[fin]);
        if (second < prev && (fin != (strlen(s) - 1)))
            second = second * -1;
        prev = rules(s[fin]);
        num = num + second;
        fin--;
    }
    return num;
}