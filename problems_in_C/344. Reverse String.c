void reverseString(char* s, int sSize) {
    char c;
    int i = 0;

    while(i < (sSize/2))
    {
        c = s[i];
        s[i] = s[sSize-1-i];
        s[sSize-1-i] = c;
        i++;
    }
}