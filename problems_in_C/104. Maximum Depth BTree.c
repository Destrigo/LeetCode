/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int	btree_level_count(struct TreeNode* root)
{
	int	count_left;
	int	count_right;

	count_left = 1;
	count_right = 1;
	if (root->left != NULL)
		count_left += btree_level_count(root->left);
	if (root->right != NULL)
		count_right += btree_level_count(root->right);
	if (count_left >= count_right)
		return (count_left);
	else
		return (count_right);
}
int maxDepth(struct TreeNode* root) {
    if(root == NULL)
        return 0;
    else
        return (btree_level_count(root));   
}