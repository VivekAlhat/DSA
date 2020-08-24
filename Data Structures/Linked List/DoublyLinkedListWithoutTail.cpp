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
        next = nullptr;
        prev = nullptr;
        this->data = data;
    }
};

class LinkedList
{
private:
    int size;
    Node *head;

public:
    LinkedList()
    {
        size = 0;
        head = nullptr;
    }

    ~LinkedList()
    {
        Node *tmp = head;
        while (tmp != nullptr)
        {
            tmp = head->next;
            delete head;
            head = tmp;
        }
        size = 0;
    }

    void getSize()
    {
        cout << "Size: " << size << endl;
    }

    void printList()
    {
        if (head != nullptr)
        {
            Node *tmp = head;
            while (tmp != nullptr)
            {
                cout << tmp->data << " ";
                tmp = tmp->next;
            }
            cout << "\n";
        }
        else
        {
            cout << "List is already empty\n";
        }
    }

    void reverse()
    {
        // Changing links
        Node *c, *p, *n;
        p = nullptr;
        c = head;
        while (c != nullptr)
        {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        head = p;
    }

    void reverseList()
    {
        stack<int> ans;
        Node *tmp = head;

        while (tmp != nullptr)
        {
            ans.push(tmp->data);
            tmp = tmp->next;
        }

        while (!ans.empty())
        {
            cout << ans.top() << " ";
            ans.pop();
        }
        cout << "\n";
    }

    void prepend(int data)
    {
        Node *n = new Node(data);
        if (head == nullptr)
        {
            head = n;
        }
        else if (head != nullptr)
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
            head = n;
        }
        else
        {
            Node *tmp = head;
            while (tmp->next != nullptr)
            {
                tmp = tmp->next;
            }
            tmp->next = n;
            n->prev = tmp;
        }
        size++;
    }

    void removeFirst()
    {
        if (head == nullptr)
        {
            cout << "List is already empty" << endl;
        }
        else
        {
            Node *tmp = head;
            head = tmp->next;
            delete tmp;
            size--;
        }
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
            Node *tmp = head;
            while (tmp->next != nullptr)
            {
                tmp = tmp->next;
            }
            tmp->prev->next = nullptr;
            delete tmp;
            size--;
        }
    }

    void insertAt(int pos, int data)
    {
        if (pos < 1 || pos > size + 1)
        {
            cout << "Invalid position, cannot create node\n";
        }
        else if (pos == 1)
        {
            prepend(data);
        }
        else if (pos == size + 1)
        {
            append(data);
        }
        else
        {
            Node *n = new Node(data);
            Node *tmp = head;
            for (int i = 1; i < pos; ++i)
            {
                tmp = tmp->next;
            }
            tmp->prev->next = n;
            n->prev = tmp->prev;
            n->next = tmp;
            size++;
        }
    }

    void removeAt(int pos)
    {
        if (pos < 1 || pos > size)
        {
            cout << "Invalid position\n";
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
    li.prepend(1);
    li.prepend(2);
    li.prepend(3);
    li.prepend(4);
    li.prepend(5);
    li.append(6);
    li.printList();
    li.getSize();
    li.reverse();
    li.printList();
    // li.removeFirst();
    // li.printList();
    // li.getSize();

    // li.removeLast();
    // li.printList();
    // li.getSize();

    // li.insertAt(5, 10);
    // li.printList();
    // li.getSize();
    // li.removeAt(3);
    // li.printList();
    // li.getSize();
    return 0;
}