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
void solve(vector<int> &arr,TreeNode * root){
        if(root==NULL){
            return;
        }
        solve(arr,root->left);
        arr.push_back(root->val);
        solve(arr,root->right);
    }
int minDiffInBST(TreeNode* root) {
        vector<int> arr;
        solve(arr,root);
        int ans=INT_MAX;
        for(int i=1;i<arr.size();i++){
            int res=arr[i]-arr[i-1];
            ans=min(ans,res);
        }
        return ans;
    }
};