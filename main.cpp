// Code 

// Definition for a binary tree node.
/*
struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        if(!head)
            return nullptr;
            
        ListNode* temp = head;
        stack<int> s;

        while (temp)
        {
            s.push(temp->val);
            temp = temp->next;
        }

        temp = head;

        while (temp)
        {
            temp->val = s.top();
            s.pop();
            temp = temp->next;
        }

        return head;
    }
};
