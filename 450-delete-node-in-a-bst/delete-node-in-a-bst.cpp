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
    TreeNode* getis(TreeNode* root) {
        while (root->left != NULL) {
            root = root->left;
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == NULL) {
            return root;
        }
        if (root->val < key) {
            root->right=deleteNode(root->right, key);
        } else if (root->val >key) {
            root->left=deleteNode(root->left, key);
        } else {
            if (root->left == NULL) {
                TreeNode* t = root->right;
                delete root;
                return t;
            }
            if (root->right == NULL) {
                TreeNode* t = root->left;
                delete root;
                return t;
            }
            TreeNode* t = getis(root->right);
            root->val=t->val;
            root->right=deleteNode(root->right,t->val);
            
        }   
        return root;
    }
};