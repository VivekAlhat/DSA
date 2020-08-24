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

    void reverse()
    {
        // changing links
        Node *n, *c, *p;
        c = head;
        p = nullptr;
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

    void prepend(int data)
    {
        Node *n = new Node(data);
        if (head == NULL)
        {
            head = n;
        }
        else
        {
            Node *tmp = head;
            head = n;
            n->next = tmp;
        }
        size++;
    }

    void removeFirst()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            Node *tmp = head;
            head = tmp->next;
            delete (tmp);
            size--;
        }
    }

    void removeLast()
    {
        if (head->next == NULL)
        {
            removeFirst();
        }
        else if (head != NULL)
        {
            Node *curr = head;
            Node *prev;
            while (curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }
            prev->next = NULL;
            delete (curr);
        }
        size--;
    }

    void removeAt(int pos)
    {
        if (pos < 1 || pos > size)
        {
            cout << "Invalid Position" << endl;
        }
        else if (pos == 1)
        {
            removeFirst();
        }
        else if (pos == size)
        {
            removeLast();
        }
        else if (head != NULL)
        {
            Node *curr = head;
            Node *prev;
            for (int i = 1; i < pos; ++i)
            {
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
            delete (curr);
            size--;
        }
    }

    void insertAt(int pos, int data)
    {
        if (pos < 0 || pos > size + 1)
        {
            cout << "Cannot insert here" << endl;
        }
        else if (pos == 1)
        {
            prepend(data);
        }
        else if (pos == size + 1)
        {
            append(data);
        }
        else if (head != NULL)
        {
            Node *n = new Node(data);
            Node *curr = head;
            Node *prev;
            for (int i = 1; i < pos; ++i)
            {
                prev = curr;
                curr = curr->next;
            }
            prev->next = n;
            n->next = curr;
            size++;
        }
    }

    void del()
    {
        Node *curr = head;
        while (curr != NULL)
        {
            curr = curr->next;
            delete (head);
            head = curr;
        }
        size = 0;
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
    // cout << "Size: " << list.getSize() << endl;
    list.reverse();
    list.printList();
    // list.prepend(2);
    // list.prepend(22);
    // list.printList();
    // cout << "Size: " << list.getSize() << endl;
    // list.removeFirst();
    // list.printList();
    // cout << "Size: " << list.getSize() << endl;
    // list.removeLast();
    // list.printList();
    // cout << "Size: " << list.getSize() << endl;
    // list.insertAt(4, 10);
    // list.printList();
    // cout << "Size: " << list.getSize() << endl;
    // list.del();
    // list.printList();
    // cout << "Size: " << list.getSize() << endl;
    return 0;
}