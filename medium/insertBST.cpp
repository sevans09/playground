// Insert a value into a BST given the root node

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == NULL) {
            return new TreeNode(val);
        }
         
        insertHelper(root, root, val);
        return root;
    }
    
    TreeNode* insertHelper(TreeNode* node, TreeNode* root, int val) {
        if (val < node->val and node->left == NULL) {
            node->left = new TreeNode(val);
            return root;
        }
        else if (val > node->val and node->right == NULL) {
            node->right = new TreeNode(val);
            return root;
        }
        
        else if (val < node->val) {
            return insertHelper(node->left, root, val);
        }
        else {
            return insertHelper(node->right, root, val);
        }
    }
};

