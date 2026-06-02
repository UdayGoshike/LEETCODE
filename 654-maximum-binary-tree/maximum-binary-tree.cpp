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
    TreeNode* solve(vector<int>&n, int l, int r) {
        int a = INT_MIN;
        if (l>r) {
            return NULL;
        }
        int in = -1;
        for (int i = l; i <= r; i++) {
            if (n[i] > a) {
                a = n[i];
                in =i;
            }
        }
        TreeNode* root = new TreeNode(a);
        root->left=solve(n,l,in-1);
        root->right=solve(n,in+1,r  );
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
       
        
        return solve(nums, 0, nums.size() - 1);
    }
};