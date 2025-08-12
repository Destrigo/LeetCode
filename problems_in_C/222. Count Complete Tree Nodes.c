/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int countNodes(struct TreeNode* root) {
    int count = 0;
    if (root == NULL)
        return count;
    if(root->left == NULL && root->right == NULL)
        return 1;
    if(root->left != NULL && root->right != NULL)
        count = 1 + countNodes(root->left) + countNodes(root->right);
    if(root->left == NULL && root->right != NULL)
        count = 1 + countNodes(root->right);
    if(root->left != NULL && root->right == NULL)
        count = 1 + countNodes(root->left);
    return count;
}