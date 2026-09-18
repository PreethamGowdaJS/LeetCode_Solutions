#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;

    ListNode(int x)
    {
        val = x;
        next = nullptr;
    }
};

ListNode* reverseList(ListNode* head)
{
    ListNode* prev = nullptr;
    ListNode* current = head;

    while (current != nullptr)
    {
        ListNode* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

void printList(ListNode* head)
{
    while (head != nullptr)
    {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}

int main()
{
    // Test Case 1: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(3);
    head1->next->next->next = new ListNode(4);
    head1->next->next->next->next = new ListNode(5);

    head1 = reverseList(head1);

    cout << "Test Case 1: ";
    printList(head1);

    // Test Case 2: 1 -> 2
    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(2);

    head2 = reverseList(head2);

    cout << "Test Case 2: ";
    printList(head2);

    return 0;
}