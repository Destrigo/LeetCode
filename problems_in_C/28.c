int strStr(char* haystack, char* needle) {
    int i = 0;
    int k = 0;

    while(haystack[i] != '\0')
    {
        k = 0;
        while(needle[k] != '\0' && haystack[i+k] == needle[k])
        {
            k++;
        }
        if(needle[k] == '\0')
            return i;
        i++;
    }

    return -1;
}