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
    vector<vector<int> > answer;
    void Levelorder(TreeNode* root, int level)
    {
        if(root == NULL) return;
        
        if(answer.size() == level)
        {
            //push a new vector
                answer.push_back(vector<int>());
            }
            //push the element
            answer[level].push_back(root -> val);
            //Left call
            Levelorder(root -> left, level+1);
            //Right call
            Levelorder(root -> right, level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        Levelorder(root,0);
        return answer;
    }
};
