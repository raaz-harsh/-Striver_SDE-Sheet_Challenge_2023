#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int>* findmid(LinkedListNode<int> *head)
{
    LinkedListNode<int>* slow = head;
    LinkedListNode<int>* fast = head;

    while(fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        
    }

    return slow;
}

LinkedListNode<int>* reverse(LinkedListNode<int>* curr)
{
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* nex = NULL;

    while(curr != NULL)
    {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }

    return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head==NULL||head->next==NULL) return true;

    LinkedListNode<int>* mid = findmid(head);

    mid->next = reverse(mid->next);
    LinkedListNode<int>* curr2 = mid->next;
    LinkedListNode<int>* curr = head;
    
    
    while(curr2 != NULL)
    {
        if(curr->data != curr2->data)
        {
            return false;

        }

        curr= curr->next;
        curr2 = curr2->next;
    }

    return true;

}