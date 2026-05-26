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
unordered_map<long long,int>m;
//Approach: Prefix sum+ Hashmap;
int help(TreeNode* root,long long cu,int target){
    if(root==NULL){
        return 0;
    }
    cu+=root->val;
    int c=m[cu-target];
    m[cu]++;    
    c+=help(root->left,cu,target);
    c+=help(root->right,cu,target);
    m[cu]--;
    return c;  
}
    int pathSum(TreeNode* root, int targetSum) {
        m[0]=1;
        return help(root,0,targetSum);
    }
};