int countSegments(char* s) {
    int i = 0;
    int count = 0;
    while(s[i] != '\0' && s[i] == ' ')
        i++;
    while(s[i] != '\0')
    {
        while(s[i] != '\0' && s[i] != ' ')
            i++;
        count++;
        while(s[i] != '\0' && s[i] == ' ')
            i++;
    }
    return count;
}