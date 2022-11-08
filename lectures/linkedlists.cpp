/*
Name: Jeremy Bergen

Linked Lists
*/
#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
};

void printList(Node *);
void insertNode(Node *, Node *);

int main(int argc, char *argv[]) {
    Node *node1 = nullptr;
    Node *node2 = NULL;
    Node *node3 = nullptr;

    node1 = new Node();
    node2 = new Node();
    node3 = new Node();

    node1->data = 15;
    node2->data = 23;
    node3->data = 42;

    node1->next = node2;
    node2->next = node3;
    node3->next = nullptr;

    // cout << node1->data << endl;
    // cout << node2->data << endl;
    // cout << node3->data << endl;

    printList(node1);
    cout << "---------------" << endl;
    Node *newNode = new Node();
    newNode->data = 50;
    newNode->next = nullptr;
    insertNode(node1, newNode);
    // node1->next = newNode;
    printList(node1);

    return 0;
}

void insertNode(Node *head, Node *newNode) {
    while(head != nullptr) {
        if(head->next == nullptr) {
            head->next = newNode;
            newNode->next = nullptr;
            break;
        } else if(head->data < newNode->data && head->next->data > newNode->data) {
            newNode->next = head->next;
            head->next = newNode;
            break;
        }
        head = head->next;
    }
}

void printList(Node *head) {
    // Node *head;
    // head = node1;
    while(head != nullptr) {
        cout << head->data << endl;
        head = head->next;
    }
}