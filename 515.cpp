// Find the largert element in every level of a binary tree
#include <queue>
class Solution{
    public:
       vector<int> largestValues(TreeNode* root){

        vector<int> res{};

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int largest {INT_MIN};
            size_t level_size {q.size()};
            for(size_t i {}; i < level_size;i++){
                TreeNode* node {q.front()};
                q.pop();
                largest = max(largest,node->val);

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            res.push_back(largest);
        }
        return res;

        

       }
}