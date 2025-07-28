/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int max_sum = INT_MIN;  
        maxPathHelper(root, max_sum);  
        return max_sum;
        
    }
private:
    int maxPathHelper(TreeNode* node, int& max_sum) {
        if (!node) {
            return 0; 
        }
        int left_sum = max(0, maxPathHelper(node->left, max_sum));  
        int right_sum = max(0, maxPathHelper(node->right, max_sum));  
        int current_sum = node->val + left_sum + right_sum;
        max_sum = max(max_sum, current_sum);
        return node->val + max(left_sum, right_sum);
    }

};