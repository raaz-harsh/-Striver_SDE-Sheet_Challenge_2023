/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    Node* slow = head;
    Node* fast = head->next; //taking the Null count
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    while(fast != NULL)
    {
        fast = fast->next;
        if(fast!= NULL)
        {
            fast= fast->next;
        }
        slow = slow->next;

    }

    return slow;
}

