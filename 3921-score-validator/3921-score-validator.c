/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* scoreValidator(char** events, int eventsSize, int* returnSize) {

    int score = 0, counter = 0;

    for (int i = 0; i < eventsSize; i++) {

        if (counter == 10)
            break;

        char ch = events[i][0];

        if (ch == 'W') {
            if (events[i][1] == 'D')
                score++;
            else
                counter++;
        }
        else if (ch == 'N') {
            score++;
        }
        else {
            score += ch - '0';
        }
    }

    int *ans = malloc(2 * sizeof(int));
    ans[0] = score;
    ans[1] = counter;

    *returnSize = 2;

    return ans;
}