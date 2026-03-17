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
    vector<vector<int>> v;
    vector<int> p;
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if (root == NULL) {
            return {};
        }
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while (!q.empty()) {
            TreeNode* c = q.front();
                q.pop();
            if (c == NULL) {
                v.push_back(p);
                p.clear();
                if(q.empty()){
                    break;
                }else{
                    q.push(NULL);
                }
                
            } else {
                
                p.push_back(c->val);
                if(c->left!=NULL){
                    q.push(c->left);
                }
                if(c->right!=NULL){
                    q.push(c->right);
                }
            }
        }
        reverse(v.begin(),v.end());

        return v;
    }
    };