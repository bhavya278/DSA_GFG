#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

Node *SortedInsert(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;
    if (x < (head->data))
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    while ((curr != NULL) && (curr->next->data < x))
        curr = curr->next;
    if (curr == NULL)
        return head;
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
int main()
{
    int x;
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    cout << "Enter Data you want to insert ";
    cin >> x;
    printlist(head);
    head = SortedInsert(head, x);
    printlist(head);

    return 0;
}
