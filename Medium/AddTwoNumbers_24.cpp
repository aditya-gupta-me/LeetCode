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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *head1 = l1;
        ListNode *head2 = l2;
        ListNode *newList = new ListNode();
        ListNode *head = newList;

        while (head1 != NULL && head2 != NULL)
        {
            head->val = head1->val + head2->val;
            head = head->next;
            head1 = head2->next;
            head2 = head->next;
        }

        return newList;
    }
};

int main()
{
    return 0;
}