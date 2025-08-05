/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root) {
    if(root==NULL)
        return 0;
    if(root->left && root->right)
        return fmin(minDepth(root->left)+1, minDepth(root->right)+1);
    if(root->left)
        return minDepth(root->left)+1;
    
    return minDepth(root->right)+1;  
    
}