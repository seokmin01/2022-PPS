class Solution {
public:
    bool isPalindrome(ListNode* head) {
        string s = "";
        while (head != nullptr) {
            s += to_string(head->val);
            head = head->next;
        }
        string t = s;
        reverse(t.begin(), t.end());
        if (t == s) return true;
        return false;
    }
};
