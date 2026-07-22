/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>
#include <string.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** buildArray(int* target, int targetSize, int n, int* returnSize) {
    char **ans = (char **)malloc(2 * n * sizeof(char *));
    int k = 0;
    int i = 0;

    for (int num = 1; num <= n && i < targetSize; num++) {
        if (num == target[i]) {
            ans[k++] = "Push";
            i++;
        } else {
            ans[k++] = "Push";
            ans[k++] = "Pop";
        }
    }

    *returnSize = k;
    return ans;
}                                           