#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {

        // case when only one element is present
        // one element is a palindrome
        // to itself
        if (head->next == NULL)
        {
            return true;
        }

        ListNode *slow = head;
        ListNode *fast = head;

        // to find the middle of the list
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // to reverse the list
        ListNode *prev = NULL;
        ListNode *curr = slow;
        ListNode *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }

        ListNode *newHead = prev;
        ListNode *oldHead = head;

        while (oldHead != NULL && newHead != NULL)
        {
            if (oldHead->val != newHead->val)
            {
                return false;
            }

            oldHead = oldHead->next;
            newHead = newHead->next;
        }

        return true;
    }
};

int main()
{
    return 0;
}