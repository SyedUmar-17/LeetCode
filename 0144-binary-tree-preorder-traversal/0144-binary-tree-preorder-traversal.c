/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdlib.h>

void preorder(struct TreeNode* root, int *ans, int *index)
{
    if(root == NULL)
        return;
    ans[(*index)++] = root->val;

    preorder(root->left, ans, index);

    preorder(root->right, ans, index);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
    int *ans = (int *)malloc(100 * sizeof(int));
    int index = 0;

    preorder(root, ans, &index);
    *returnSize = index;

    return ans;
}