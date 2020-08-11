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
    int Great(TreeNode* node, int runningSum)
    {
        //Base case
        if(node == NULL)
            return runningSum;
        
        //Right Subtree
        int r = Great(node->right, runningSum);
        //Logic
        node -> val = node -> val+r;
        //Left Subtree

    return Great(node -> left, node -> val);
    }
    TreeNode* bstToGst(TreeNode* root) {
        Great(root,0);
        return root;
    }
};
