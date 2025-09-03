#include <stdbool.h>
#include <string.h>

int memo[21][21]; // memo[i][j] - stores result of < isMatch(s[i..], p[j..]) >;

// isMatchHelper(i, j) - whether s[i..] matches p[j..];
bool isMatchHelper(int i, int j, char *s, char *p) {
    if (memo[i][j] != -1) {
        return memo[i][j];
    }

    bool ans;
    if (p[j] == '\0') {
        ans = (s[i] == '\0'); // Both strings reached the end;
    } else {
        bool first_match = (s[i] != '\0' && (p[j] == s[i] || p[j] == '.'));

        if (p[j + 1] == '*') {
            // Try zero occurrence or one/more occurrences;
            ans = isMatchHelper(i, j + 2, s, p) || (first_match && isMatchHelper(i + 1, j, s, p));
        } else {
            ans = first_match && isMatchHelper(i + 1, j + 1, s, p);
        }
    }

    memo[i][j] = ans;
    return ans;
}

bool isMatch(char *s, char *p) {
    memset(memo, -1, sizeof(memo)); // Initialize memoization table;
    return isMatchHelper(0, 0, s, p);
}