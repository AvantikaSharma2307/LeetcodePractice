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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> flarr;
        if(root==NULL) return flarr;
        queue<TreeNode*>q;
        q.push(root);int j=0;
        while(!q.empty()){
            vector<int>arr;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                if(node->left!=NULL)q.push(node->left);
                if(node->right!=NULL)q.push(node->right);
                arr.push_back(node->val);
                q.pop();
            }
            if(j%2!=0) reverse(arr.begin(),arr.end());
            flarr.push_back(arr);
            j++;
        }
    return flarr;
    }
};