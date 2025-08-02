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
     int count = 0;
    int result = -1;

    void inOrder(TreeNode* node, int k) {
        if (!node || count >= k) return;

        inOrder(node->left, k);

        count++;
        if (count == k) {
            result = node->val;
            return;
        }

        inOrder(node->right, k);
    }

public:
    int kthSmallest(TreeNode* root, int k) {
        inOrder(root, k);
        return result;
    }
};