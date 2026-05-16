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
int h=-1;
int m=-1;
int a=0;
    int findBottomLeftValue(TreeNode* root) {
        if(!root){
            return 0;
        }
        h++;
        findBottomLeftValue(root->left);
       
        if(h>m){
            m=h;
            a=root->val;
        }
        
        findBottomLeftValue(root->right);
        h--;
        return a;
        
    }
};