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
    bool isi(TreeNode* r1, TreeNode* r2) {
        if (r1 == NULL && r2 == NULL) {
            return true;
        } else if (r1 == NULL || r2 == NULL) {
            return false;
        }
        if(r1->val!=r2->val){
            return false;
        }

        return isi(r1->left,r2->left)&&
        isi(r1->right,r2->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == NULL && subRoot == NULL) {
            return true;
        } else if (root == NULL || subRoot == NULL) {
            return false;
        }
        if (root->val == subRoot->val) {
            if (isi(root, subRoot)) {
                return true;
            }
        }
        int ls = isSubtree(root->left, subRoot);
        if (!ls) {
            return isSubtree(root->right, subRoot);
        }
        return true;
    }
};