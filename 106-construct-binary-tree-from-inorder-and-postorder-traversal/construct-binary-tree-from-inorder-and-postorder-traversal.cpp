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
int s(vector<int>& inorder, int l, int r, int v) {
        for (int i = l; i <= r; i++) {
            if (inorder[i] == v) {
                return i;
            }
        }

        return -1;
    }
TreeNode* fu(vector<int>& postorder, vector<int>& inorder, int& p, int l,
                 int r) {
        if (l > r) {
            return nullptr;
        }
        TreeNode* root = new TreeNode(postorder[p]);
        int i = s(inorder, l, r, postorder[p--]);
         root->right = fu(postorder, inorder, p, i + 1, r);
        root->left = fu(postorder, inorder, p, l, i - 1);
       
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
         int in = postorder.size()-1;
        return fu(postorder, inorder, in, 0, postorder.size() - 1);
    }
};