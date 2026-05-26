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

int help(TreeNode *root,int a){
        if(root==NULL){
            return 0;
        }else if(root->val>=a){
            a=root->val;
            c++;
        }
        int l=help(root->left,a);
        int r=help(root->right,a);
        return c;
}
    int goodNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        help(root,INT_MIN);
        return c;
    }
};