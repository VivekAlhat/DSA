#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
};

class LinkedList
{
private:
    int size;
    Node *head;
    Node *tail;

public:
    LinkedList()
    {
        size = 0;
        head = nullptr;
        tail = nullptr;
    }

    ~LinkedList()
    {
        Node *tmp;
        while (head != nullptr)
        {
            tmp = head->next;
            delete head;
            head = tmp;
        }
        size = 0;
    }

    void getSize()
    {
        cout << "Size of list: " << size << endl;
    }

    void printList()
    {
        if (head == nullptr)
        {
            cout << "List is already empty" << endl;
        }
        else
        {
            Node *tmp = head;
            while (tmp != nullptr)
            {
                cout << tmp->data << " ";
                tmp = tmp->next;
            }
            cout << "\n";
        }
    }

    void printReverse()
    {
        if (head == nullptr)
        {
            cout << "List is already empty" << endl;
        }
        else
        {
            Node *t = tail;
            while (t != nullptr)
            {
                cout << t->data << " ";
                t = t->prev;
            }
            cout << "\n";
        }
    }

    void prepend(int data)
    {
        Node *n = new Node(data);
        if (head == nullptr)
        {
            head = tail = n;
        }
        else
        {
            head->prev = n;
            n->next = head;
            head = n;
        }
        size++;
    }

    void append(int data)
    {
        Node *n = new Node(data);
        if (head == nullptr)
        {
            head = tail = n;
        }
        else
        {
            tail->next = n;
            n->prev = tail;
            tail = n;
        }
        size++;
    }

    void removeFirst()
    {
        if (head == nullptr)
        {
            cout << "List is already empty" << endl;
        }
        else if (head->next == nullptr)
        {
            delete head;
            head = tail = nullptr;
        }
        else
        {
            head = head->next;
            delete head->prev;
            head->prev = nullptr;
        }
        size--;
    }

    void removeLast()
    {
        if (head == nullptr)
        {
            cout << "List is already empty" << endl;
        }
        else if (head->next == nullptr)
        {
            removeFirst();
        }
        else
        {
            tail = tail->prev;
            delete tail->next;
            tail->next = nullptr;
        }
        size--;
    }

    void insertAt(int pos, int data)
    {
        if (pos < 1 || pos > size + 1)
        {
            cout << "Invalid position, cannot create a new node" << endl;
        }
        else if (pos == 1)
        {
            prepend(data);
        }
        else if (pos == size + 1)
        {
            append(data);
        }
        else if (head != nullptr)
        {
            Node *n = new Node(data);
            Node *tmp = head;
            for (int i = 1; i < pos; ++i)
            {
                tmp = tmp->next;
            }
            tmp->prev->next = n;
            n->next = tmp;
            n->prev = tmp->prev;
            tmp->prev = n;
            size++;
        }
    }

    void removeAt(int pos)
    {
        if (pos < 1 || pos >= size + 1)
        {
            cout << "Invalid position" << endl;
        }
        else if (pos == 1)
        {
            removeFirst();
        }
        else if (pos == size)
        {
            removeLast();
        }
        else
        {
            Node *tmp = head;
            for (int i = 1; i < pos; ++i)
            {
                tmp = tmp->next;
            }
            tmp->prev->next = tmp->next;
            tmp->next->prev = tmp->prev;
            delete tmp;
            size--;
        }
    }
};

int main()
{
    LinkedList li;
    li.append(100);
    li.append(110);
    li.append(120);
    li.printList();
    li.getSize();

    li.prepend(10);
    li.prepend(20);
    li.prepend(30);

    li.printList();
    li.getSize();
    li.printReverse();

    li.insertAt(5, 500);
    li.printList();
    li.getSize();

    li.removeAt(8);
    li.printList();
    li.getSize();
    // li.printList();
    // li.getSize();

    // li.removeFirst();
    // li.printList();
    // li.getSize();
    // li.removeFirst();
    // li.printList();
    // li.getSize();

    // li.removeLast();
    // li.printList();
    // li.getSize();
    // li.removeLast();
    // li.printList();
    // li.getSize();
    return 0;
}