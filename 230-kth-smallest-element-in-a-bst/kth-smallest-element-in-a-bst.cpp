/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int a = 0;
    int helper(TreeNode* root, int k, int &c) {
        if(root==NULL){
            return 0;
        }
       

        helper(root->left, k, c);
         c++;
      
        if (c == k) {
            a = root->val;
        }

        helper(root->right, k, c);
       
        return a;
    }
    int kthSmallest(TreeNode* root, int k) {
        if (root == NULL) {
            return 0;
        }
        
        int c=0;
        return helper(root, k, c);
    }
};