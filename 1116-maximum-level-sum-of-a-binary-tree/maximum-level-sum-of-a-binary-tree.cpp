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
    int maxLevelSum(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        int h = 0;
        int a = INT_MIN;
        int fa=0;
        int faa=0;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while (!q.empty()) {
            TreeNode* w = q.front();
            q.pop();
            if (w == NULL) {
                fa++;
                if (h > a) {
                    a = h;
                    
                    faa=fa;
                }
                h = 0;
                if(q.empty()){
                    return faa;
                }
                q.push(NULL);
            } else {
                h += w->val;

                if (w->left != NULL) {
                    q.push(w->left);
                }
                if (w->right != NULL) {
                    q.push(w->right);
                }
            }
        }
        return faa;
    }
};