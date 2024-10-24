#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void inserAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void inserAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
node* mergeRecursive(node *&head1,node* &head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node* result;
    if(head1->data>head2->data){
        result=head2;
        result->next=mergeRecursive(head1,head2->next);
    }
    else {
        result=head1;
        result->next=mergeRecursive(head1->next,head2);
    }
}
void insertAtPositionk(node *&head, int val, int k)
{

    if (k == 0)
    {
        inserAtHead(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;
    int c = 0;
    while (c != k - 1)
    {
        temp = temp->next;
        c++;
    }
    n->next = temp->next;
    temp->next = n;
}
void updation(node *&head, int val, int k)
{
    node *n = new node(val);
    node *temp = head;
    int c = 0;
    while (c != k)
    {
        temp = temp->next;
        c++;
    }
    temp->data = val;
}
void deletion(node *&head, int val)
{
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " "; // endl;
        temp = temp->next;
    }
    cout << endl;
}
node *reverse(node *&head)
{
    node *pre = NULL;
    node *cur = head;
    node *nxt;
    while (cur != NULL)
    {
        nxt = cur->next;
        cur->next = pre;
        pre = cur;
        cur = nxt;
    }
    return pre;
}
node *reversek(node *&head, int k)
{
    node *preptr = NULL;
    node *curptr = head;
    node *nxtptr;
    int c = 0;
    while (curptr != 0 && c < k)
    {
        nxtptr = curptr->next;
        curptr->next = preptr;
        preptr = curptr;
        curptr = nxtptr;
        c++;
    }
    if (nxtptr != NULL)
    {
        head->next = reversek(nxtptr, k);
    }
    return preptr;
}

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define nl "\n"
#define pi 3.141592653
const int MAXN = 1e5 + 5;

int main()
{
    fast;
    node *head = NULL;
    inserAtTail(head, 1);
    inserAtTail(head, 2);
    display(head);
    inserAtHead(head, 3);
    display(head);
    // // deletion(head,2);
    // node *nh = reverse(head);
    // display(nh);
    insertAtPositionk(head, 4, 2);
    display(head);
    updation(head, 5, 2);
    display(head);

    return 0;
}