// Appending to the list without using tail pointer
#include <iostream>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class LinkedList
{
private:
    Node *head;
    int size;

public:
    int getSize()
    {
        return size;
    }

    LinkedList()
    {
        head = NULL;
        size = 0;
    }

    ~LinkedList()
    {
        Node *ne = head;
        while (ne != NULL)
        {
            ne = head->next;
            delete (head);
            head = ne;
        }
        size = 0;
    }

    void printList()
    {
        if (head == NULL)
        {
            cout << "List is empty, add a node first" << endl;
        }
        else
        {
            Node *tmp = head;
            while (tmp != NULL)
            {
                cout << tmp->data << " ";
                tmp = tmp->next;
            }
            cout << endl;
        }
    }

    void append(int data)
    {
        Node *n = new Node(data);
        if (head == NULL)
        {
            head = n;
        }
        else
        {
            Node *tmp = head;
            while (tmp->next != NULL)
            {
                tmp = tmp->next;
            }
            tmp->next = n;
        }
        size++;
    }

    void returnMiddle()
    {
        Node *slow = head;
        Node *fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        cout << "Middle: " << slow->data << endl;
    }
};

int main()
{
    LinkedList list;
    list.append(1);
    list.append(11);
    list.append(111);
    list.append(1111);
    list.append(11111);
    list.printList();
    cout << "Size: " << list.getSize() << endl;
    list.returnMiddle();
    return 0;
}