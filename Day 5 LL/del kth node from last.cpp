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

Node* removeKthNode(Node* head, int K)
{
   
    
    
    Node* temp = head;
    int cnt= 0;
    while(temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    if(cnt == K)
    {
        return head->next;
    }
    int n = cnt-K;
    cnt = 0;
    temp = head;
    while(cnt < n-1)
    {
        temp= temp->next;
        cnt++;
    }

    temp->next = temp->next->next;


    return head;
}
