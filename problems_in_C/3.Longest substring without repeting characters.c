int max_two(int num1, int num2)
{
    if(num1 > num2)
        return num1;
    else
        return num2; 
}

int lengthOfLongestSubstring(char* s) {
    int buffer[256] = {0};
    int left = 0;
    int right = 0;
    int max = 0;

    while(right < strlen(s))
    {
        buffer[(s[right])]++;
        
        while(buffer[(s[right])] > 1)
        {
            buffer[(s[left])]--;
            left++;
        }
        max = max_two(max, (right - left + 1));
        right++;
    }
    return max;
}