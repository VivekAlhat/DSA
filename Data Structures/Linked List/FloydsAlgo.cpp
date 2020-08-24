#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;
    int size;

public:
    LinkedList()
    {
        head = nullptr;
        size = 0;
    }

    void append(int data)
    {
        Node *n = new Node(data);
        if (head == nullptr)
        {
            head = n;
        }
        else if (head != nullptr)
        {
            Node *tmp = head;
            head = n;
            n->next = tmp;
        }
        size++;
    }

    void loop()
    {
        Node *tmp = head;
        while (tmp->next != nullptr)
        {
            tmp = tmp->next;
        }
        tmp->next = head;
    }

    bool isCycle()
    {
        Node *slow = head;
        Node *fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    LinkedList list;
    list.append(20);
    list.append(4);
    list.append(15);
    list.append(45);
    list.loop(); // Function that creates a loop
    bool ans = list.isCycle();
    if (ans)
    {
        cout << "Loop exist." << endl;
    }
    else
    {
        cout << "Loop does not exist." << endl;
    }
    return 0;
}