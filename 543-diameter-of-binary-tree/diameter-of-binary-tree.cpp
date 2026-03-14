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
int ans=0;
int height(TreeNode *root){
    if(root==NULL){
        return 0;
    }

    int lh=height(root->left);
    int rh=height(root->right);
    ans=max(ans,lh+rh);

    return max(lh,rh)+1;
}
    int diameterOfBinaryTree(TreeNode* root) {
        // if (root==NULL){
        //     return 0;
        // }
        
        // int cr=height(root->left)+height(root->right);
        // int lh=diameterOfBinaryTree(root->left);
        // int rh=diameterOfBinaryTree(root->right);
        // return max(cr,max(lh,rh));
        height(root);
        return ans;
    }
};