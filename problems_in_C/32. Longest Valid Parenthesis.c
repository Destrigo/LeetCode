int longestValidParentheses(char* s) {
    int maxLen = 0, stack[300000], top = -1;
    stack[++top] = -1;
    for (int i = 0; s[i]; i++) {
        if (s[i] == '(') {
            stack[++top] = i;
        } else {
            top--;
            if (top < 0) {
                stack[++top] = i;
            } else {
                int len = i - stack[top];
                if (len > maxLen) maxLen = len;
            }
        }
    }
    return maxLen;
}