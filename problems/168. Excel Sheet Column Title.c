char* convertToTitle(int columnNumber) {
    char* sol;
    char c;

    int i = 0;
    int k = 0;
    int num = columnNumber;
    while(num > 0)
    {
        num--;
        num = num / 26;
        i++;
    }
    sol = malloc((i + 1) * sizeof(char));
    sol[i] = '\0';
    i--;
    while(columnNumber > 0)
    {
        columnNumber--;
        c = (columnNumber % 26) + ('A');
        
        sol[i] = c;
        columnNumber = columnNumber / 26;
        i--;
    }
    return sol;
}