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
void PT(TreeNode* root,vector<int>&arr){
    if(root==NULL){
        return ;
    }
    PT(root->left,arr);
    PT(root->right,arr);
    arr.push_back(root->val);

}
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>arr;
        PT(root,arr);
        return arr;

        
    }
};