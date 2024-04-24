#include <iostream>
using namespace std;

// creating link list
class LinkList
{
public:
    int data;
    LinkList *next;

    // constructor
    LinkList(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertAtHead(LinkList *&head, int d)
{
    LinkList *newLinkList = new LinkList(d);
    newLinkList->next = head;
    head = newLinkList;
    cout << "Calling head" << endl;
};

void insertAtTail(LinkList *&tail, int d)
{

    LinkList *newLinkList = new LinkList(d);
    tail->next = newLinkList;
    cout << "Calling tail" << endl;
}

// insert any position in link_List

void insertPosition(LinkList *&head, int position, int d)
{
    LinkList *tempLinkList = head;
    int c = 0;

    while (c < position - 1)
    {
        tempLinkList = head->next;
        c++;
    }

    // creating a new link_list
    LinkList *newLinkList = new LinkList(d);
    newLinkList->next = tempLinkList->next;
    tempLinkList->next = newLinkList;
};

void printLinkList(LinkList *&head)
{
    LinkList *newLinList = head;

    while (newLinList != NULL)
    {
        cout << newLinList->data << endl;
        newLinList = newLinList->next;
    }

    cout << endl;
}

int main()
{
    // creating new object
    LinkList *ll1 = new LinkList(2);
    LinkList *head = ll1;
    LinkList *tail = ll1;

    insertAtHead(head, 34);
    insertAtHead(head, 44);
    insertPosition(head, 5, 77);
    insertAtHead(head, 51);
    // insertAtTail(tail, 32);
    printLinkList(head);

    return 0;
}
