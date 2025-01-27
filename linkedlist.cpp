#include <iostream>
using namespace std;

class Node {

    public :
        int data;
        Node *next;
};

main () {
    int pos;
    Node *Head = NULL;
    Node *ptr = NULL;

    Head = new Node ();

    Head->data = 10;
    Head->next = NULL;

    ptr = new Node ();

    ptr->data = 20;
    ptr->next = NULL;

    Head->next = ptr;

    ptr = new Node ();

    ptr->data = 30;
    ptr->next = NULL;
    
    Head->next->next = ptr;

    ptr = new Node ();

    ptr->data = 40;
    ptr->next = NULL;
    
    Head->next->next->next = ptr;

    ptr = Head;

    while (ptr != NULL)
    {
        cout << ptr->data << endl;

        ptr = ptr->next;
    } 

    Node *current = NULL;
    Node *prev = NULL;
    Node *next = NULL;

    current = Head;
    
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    Head = prev;
    cout << "after prev : " << endl;
    ptr = Head;
       while (ptr != NULL)
    {
        cout << ptr->data << endl;

        ptr = ptr->next;
    }   
}
