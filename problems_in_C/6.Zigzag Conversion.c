char* convert(char* s, int numRows) {
    if (numRows == 1)
        return s;

    char** table = (char**)malloc(numRows * sizeof(char*));
    for (int i = 0; i < numRows; i++) 
    {
        table[i] = (char*)malloc((strlen(s) + 1) * sizeof(char));
        (table[i])[0] = '\0';
    }

    int isbeginning = 1;
    int tmp = 0;

    for(int i = 0; i < strlen(s); i++)
    {
        if(tmp == 0)
            isbeginning = 1;
        
        if(tmp == numRows - 1)
            isbeginning = 0;
        
        if(tmp < numRows && isbeginning)
        {
            strncat(table[tmp], &s[i], 1);
            tmp += 1;
        }

        if (isbeginning == false) 
        {
            strncat(table[tmp], &s[i], 1);
            tmp -= 1;
        }
    }

    char *result = (char*)malloc((strlen(s) + 1) * sizeof(char));
    result[0] = '\0';
    for (int i = 0; i < numRows; i++)
    {
        strcat(result, table[i]);
        free(table[i]);
    }
    free(table);

    return result;
}