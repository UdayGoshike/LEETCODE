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
    string s = "";
    int sumNumbers(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        char c = root->val + '0';
        s += c;
        if (root->left == NULL && root->right == NULL) {
            int q = stoi(s);
            a += q;
        }

        sumNumbers(root->left);
        sumNumbers(root->right);
        s.pop_back();
        return a;
    }
};