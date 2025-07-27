#define MAX 10000  // Max length of the input string

bool check_parentheses(char x, char y) {
    return (x == '(' && y == ')') ||
           (x == '{' && y == '}') ||
           (x == '[' && y == ']');
}

bool isValid(char* s) {
    char stack[MAX];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char x = s[i];
        if (x == '(' || x == '{' || x == '[') {
            stack[++top] = x; // push
        } else {
            if (top == -1 || !check_parentheses(stack[top], x)) {
                return false;
            }
            top--; // pop
        }
    }

    return top == -1; // stack should be empty at the end
}