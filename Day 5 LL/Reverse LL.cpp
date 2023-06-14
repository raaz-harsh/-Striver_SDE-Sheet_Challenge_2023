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
void reverse(LinkedListNode<int> *&head,LinkedListNode<int> *prev,LinkedListNode<int> *curr)
{
    if(curr == NULL)
    {
        head = prev; //zab hum last node pe aa jayenge
        return;
    }
    LinkedListNode<int> *forward = curr->next;
    reverse(head,curr,forward);//baki recursion solve kr k dega
    curr->next = prev; //ek case solve karenge
    
}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    //using recursion

    LinkedListNode<int> *prev = NULL;
    LinkedListNode<int> *curr = head;

    reverse(head,prev,curr);

    return head;
}