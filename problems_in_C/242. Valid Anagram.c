bool isAnagram(char* s, char* t) {
    int i = 0;

    int hash1[26] = {0};
    int hash2[26] = {0};

    if(strlen(s) != strlen(t))
        return false;
    
    while(s[i] != '\0')
    {
        hash1[s[i] - 97]++;
        hash2[t[i] - 97]++;
        i++;
    }
    i = 0;
    while(i < 26)
    {
        if(hash1[i] != hash2[i])
            return false;
        i++;
    }

    return true;
}