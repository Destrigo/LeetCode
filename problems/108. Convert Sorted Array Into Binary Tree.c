/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* createBST(int* arr, int low, int high) {
    if (low > high)
        return NULL;
    int mid = low + (high - low)/2;

    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = arr[mid];
    node->left = createBST(arr, low, mid - 1);
    node->right = createBST(arr, mid + 1, high);
    
    return node;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    struct TreeNode* root = createBST(nums, 0, numsSize-1);
    return root;       
}