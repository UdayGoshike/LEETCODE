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
    int s(vector<int>& inorder, int l, int r, int v) {
        for (int i = l; i <= r; i++) {
            if (inorder[i] == v) {
                return i;
            }
        }

        return -1;
    }
    TreeNode* fu(vector<int>& preorder, vector<int>& inorder, int& p, int l,
                 int r) {
        if (l > r) {
            return nullptr;
        }
        TreeNode* root = new TreeNode(preorder[p]);
        int i = s(inorder, l, r, preorder[p]);
        p++;
        root->left = fu(preorder, inorder, p, l, i - 1);
        root->right = fu(preorder, inorder, p, i + 1, r);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int in = 0;
        return fu(preorder, inorder, in, 0, preorder.size() - 1);
    }
};