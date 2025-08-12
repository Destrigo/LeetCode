/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    if(root == NULL)
        return root;
    struct TreeNode dummy = *root;


    if(root->left != NULL)
        invertTree(root->left);
    if(root->right != NULL)
        invertTree(root->right);
    
    root->left = dummy.right;
    root->right = dummy.left;

    return root;
}