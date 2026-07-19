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
int c=0;
int h(TreeNode* root,int m){
        if(root==nullptr){
            return 0;
        }
        if(root->left==nullptr && root->right==nullptr){
            c++;
            return root->val;
        }
        int l=h(root->left,m);
            
        int r=h(root->right,m);
        m=max(l,m);
        m=max(r,m);
        if(root->val>=m){
            c++;
        }
        m=max(root->val,m);
        return m;
}
    int countDominantNodes(TreeNode* root) {
        h(root,0);
       return c;
    }
};