#include <stdlib.h>

void inorder(struct TreeNode* root, int *ans, int *index)
{
    if(root == NULL)
        return;

    inorder(root->left, ans, index);

    ans[(*index)++] = root->val;

    inorder(root->right, ans, index);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize)
{
    int *ans = (int *)malloc(100 * sizeof(int));
    int index = 0;

    inorder(root, ans, &index);

    *returnSize = index;

    return ans;
}