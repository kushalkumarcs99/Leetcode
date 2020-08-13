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
    TreeNode *prev = NULL;
    bool Valid(TreeNode* current)
    {
        //Base case
        if(current == NULL) return true;
        
        //recursive call to left subtree
        if(!Valid(current -> left)) return false;
        
        //tasks
        if(prev != NULL && current -> val <= prev -> val) return false;
        prev = current;
        
        //recursive call to right subtree
        if(!Valid(current -> right)) return false;
        
        return true;
    }
    bool isValidBST(TreeNode* root){
        return Valid(root);
    }
};
