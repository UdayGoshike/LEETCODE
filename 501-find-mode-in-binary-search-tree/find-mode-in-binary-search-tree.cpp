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
vector<int>v;
int c=0;
int m=0;
TreeNode* prev=nullptr; 
    vector<int> findMode(TreeNode* root) {
        if(root==nullptr){
            return {};
        }
        findMode(root->left);
        if(prev && root->val==prev->val){
            c++;
        }else{
            c=1;
        }
        if(c>m){
            v.clear();
            v.push_back(root->val);
            m=c;
        }else if(c==m){
            v.push_back(root->val);
        }
        prev=root;
        findMode(root->right);

        return v;
    }
};