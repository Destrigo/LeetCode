int titleToNumber(char* columnTitle) {
    int num = 0;
    int i = 0;

    for(i = 0; columnTitle[i]; i++)
        num = (num * 26) + (columnTitle[i] - 64);

    return num;
}