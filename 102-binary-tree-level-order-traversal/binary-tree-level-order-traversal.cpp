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

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*>q;
        if(root!=NULL){
             q.push(root);
        }else{
            return {};
        }

        q.push(NULL);
        vector<int>v;
        while(!q.empty()){
            TreeNode*curr=q.front();
            q.pop();
            
            if(curr==NULL){
                ans.push_back(v);
                if(q.empty()){
                    return ans;
                }
                
                v.clear();
                q.push(NULL);
            }else{
                v.push_back(curr->val);
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
            }
        }
        return {};
    }
};