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

/*
 * 🌲 Morris Postorder Traversal
 * This method uses a modified preorder (Root ➝ Right ➝ Left)
 * and reverses the result to obtain Postorder (Left ➝ Right ➝ Root),
 * achieving traversal in O(1) space without recursion or a stack.
 */

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        TreeNode* temp = nullptr;
        vector<int> ans;

        while (root) {
            if (root->right) {
                // 🔍 Find the leftmost node in the right subtree (predecessor)
                temp = root->right;
                while (temp->left && temp->left != root) {
                    temp = temp->left;
                }

                if (temp->left == nullptr) {
                    // 📝 Visit current before threading (modified preorder)
                    ans.push_back(root->val);
                    // 🔗 Thread left of predecessor to current root
                    temp->left = root;
                    root = root->right;
                } else {
                    // 🔁 Thread exists — remove it and move left
                    temp->left = nullptr;
                    root = root->left;
                }
            } else {
                // ✅ No right child — visit and move left
                ans.push_back(root->val);
                root = root->left;
            }
        }

        // 🔁 Reverse the result to get correct postorder
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
