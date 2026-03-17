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
bool v=true;
int vh(TreeNode* root){
    if(root==NULL){
        return 0;
    }

    int l=vh(root->left);
    int r=vh(root->right);
    int c=abs(l-r);
    if(c>1){
        v=false;
    }

    return max(l,r)+1;
}
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
    vh(root);
    return v;
        
    }
};