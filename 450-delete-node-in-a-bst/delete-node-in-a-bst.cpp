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

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return NULL;
        }
        if(root->val<key){
            root->right=deleteNode(root->right,key);
            return root;
        }
        if(root->val>key){
            root->left=deleteNode(root->left,key);
            return root;
        }
        if(root->left==NULL && root->right==NULL){
            return NULL;
        }
        if(root->left==NULL){
            return root->right;
        }
         if(root->right==NULL){
            return root->left;
        }
        root->val=findMax(root->left)->val;
        root->left=deleteNode(root->left,root->val);
        return root;
        
    }
    TreeNode* findMax(TreeNode* root) {
        while (root->right != nullptr) {
            root = root->right;
        }
        return root;
    }
};