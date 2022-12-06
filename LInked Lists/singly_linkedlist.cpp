#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

// creating a node
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node "<< value << endl;
    }
};

// insert at head
void InserAthead(Node *&head, int d)
{
    // create new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

// insert at tail
void insertAtTail(Node *&tail, int d)
{
    // create new node
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

// insert in middle of the linked list on selected position
void insertAtposition(Node *&tail, Node *&head, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        InserAthead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // insert at tail - last position - update tail
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // creating a new node
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// delete node
void deleteNode(int position, Node *&head)
{
    // delete start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        //memory free start node
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        //deleting given data position
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
//reverse
Node* reverse1(Node* head){
    if(head == NULL || head->next == NULL){
     return head;
    }
    
    cout << head->data << " " ;
    cout << endl;

    Node* chotaHead = reverse1(head-> next);
    cout << head->data << " " ;
    
    head-> next -> next = head;
    cout << head->data << " " ;
    head-> next = NULL;
    
    
    return chotaHead;
}

// traversal - print the linked list
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // linked list
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    print(head);
    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);
    insertAtposition(tail, head, 4, 22);
    print(head);

    // cout << "head "<< head->data << endl;
    // cout << "tail "<<tail->data << endl;

    // deleteNode(3,head);
    // print(head);
    reverse1(head);

    return 0;
}