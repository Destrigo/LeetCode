/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int helper(struct TreeNode* node)
{
    if(node == NULL)
        return 0;
    int l = helper(node->left);
    if(l == -1)
        return -1;

    int r = helper(node->right);
    if(r == -1)
        return -1;

    if(abs(l-r) > 1)
        return -1;

    if(l > r)
        return(1 + l);
    else
        return (1 + r);

}

bool isBalanced(struct TreeNode* root) {
    int x = helper(root);

    if(x == -1)
        return false;
    else
        return true;
}