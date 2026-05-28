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
   
    int a=0;
    int help(TreeNode* root, bool v,int c) {
        if (root == NULL) {
            return c;
        }
        if (v == false) {
            if (root->left != NULL) {
                c++;
                a=max(a,c);
                help(root->left, true,c);
            }
                c=0;
                a=max(a,c);
                help(root->right, false,c);
            
        }
        if (v == true ) {
            if(root->right != NULL){
                c++;
                a=max(a,c);
                help(root->right, false,c);
            }
                c=0;
                a=max(a,c);
                help(root->left, true,c);
        }
        return a;
    }
    int longestZigZag(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        if(root->left==NULL && root->right==NULL){
            return 0;
        }
        int a1 = help(root->left, true,0);
        int a2 = help(root->right, false,0);
        return max(a1,a2)+1;
    }
};