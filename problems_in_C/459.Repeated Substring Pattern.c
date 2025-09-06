bool repeatedSubstringPattern(char* s) {
    int i = strlen(s);
    char copy[2 * i + 1];
    strcpy(copy, s);
    strcat(copy, s);
    copy[2 * i - 1] = '\0';

    return strstr(copy + 1, s);
}