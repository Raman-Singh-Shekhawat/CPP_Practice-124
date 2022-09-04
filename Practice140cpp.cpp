// Test 2

// 141. Next Number: Given a large number represented in the form of a linked list. Write code to increment the number by 1 in-place(i.e. without using extra space).

/**********
 * Following is the Node class that is already written.

class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

*********/

Node *NextLargeNumber(Node *head)
{

    if (head->next == NULL)
    {
        if (head->data == 9)
        {
            head->data = 0;
            Node *x = new Node(1);

            x->next = head;
            head = x;
        }
        else
            head->data++;

        return head;
    }
    Node *pn = NextLargeNumber(head->next);

    if (head->next->data == 0 && pn->data == 1)
    {
        if (head->data == 9)
        {
            head->data = 0;
            Node *x = new Node(1);

            x->next = head;
            head = x;
        }
        else
            head->data++;

        delete pn;
        return head;
    }

    else
    {
        return head;
    }
}
