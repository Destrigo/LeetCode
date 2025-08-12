int lengthOfLastWord(char* s) {
    int len = strlen(s) - 1;
    int i = 0;

    while(s[len] == ' ')
        len--;
    while(len >= 0 && s[len] != ' ')
    {
        len--;
        i++;
    }
    return i;
}