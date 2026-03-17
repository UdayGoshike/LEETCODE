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
 TreeNode* vh(vector<int>&nums,int s,int e){
    if(s>e){
        return NULL;
    }
    int m=s+(e-s)/2;
    TreeNode* c=new TreeNode(nums[m]);
    c->left=vh(nums,s,m-1);
    c->right=vh(nums,m+1,e);

    return c;
 }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return vh(nums,0,nums.size()-1);
    }
};