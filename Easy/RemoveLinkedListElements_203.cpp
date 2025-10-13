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
    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == NULL)
        {
            return head;
        }

        ListNode *temp = head;

        while (temp != NULL)
        {
            if (temp->next != NULL && temp->next->val == val)
            {
                if (temp->next->next == NULL)
                {
                    ListNode *curr = temp->next;
                    temp->next = NULL;
                    delete curr;
                }
                else
                {
                    ListNode *curr = temp->next;
                    temp->next = temp->next->next;
                    curr->next = NULL;
                    delete curr;
                }
            }
            else
            {
                temp = temp->next;
            }
        }

        if (head->val == val && head->next == NULL)
        {
            head = NULL;
            return head;
        }
        else if (head->val == val)
        {
            head = head->next;
        }

        return head;
    }
};

int main()
{
    return 0;
}