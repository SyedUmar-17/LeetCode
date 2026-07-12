#include <stdlib.h>

char* removeOuterParentheses(char* s) {
    int count = 0;
    int i = 0, j = 0;

    char *ans = (char *)malloc(sizeof(char) * (100001));

    while (s[i] != '\0') {

        if (s[i] == '(') {
            if (count > 0)
                ans[j++] = '(';
            count++;
        }
        else {  
            count--;
            if (count > 0)
                ans[j++] = ')';
        }

        i++;
    }

    ans[j] = '\0';
    return ans;
}