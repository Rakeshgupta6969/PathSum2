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
       void solve(TreeNode* root,int k,vector<vector<int>> &path,int sum,vector<int> a){
        if (root==NULL)
        {
            return;
        }
        sum+=root->val; 
        a.push_back(root->val);  
    
        if(root->left==NULL && root->right==NULL){
        if (sum==k)
        {
            path.push_back(a);
        }
        }
    
        solve(root->left,k,path,sum,a);
        solve(root->right,k,path,sum,a);
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    
    vector<vector<int>> path;
    vector<int> a;
    int sum=0;
    solve(root,targetSum,path,sum,a);
    
    return path;        
    }
    };