#include <bits/stdc++.h>
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

class Queue
{
private:
    Node *front, *rear;
    int size, count;

public:
    Queue(int size)
    {
        count = 0;
        front = rear = nullptr;
        this->size = size;
    }

    bool isempty()
    {
        if (count == 0 || front == nullptr && rear == nullptr)
        {
            return true;
        }
        return false;
    }

    bool isfull()
    {
        if (count == size)
        {
            return true;
        }
        return false;
    }

    void pushRear(int data)
    {
        Node *n = new Node(data);
        if (isfull())
        {
            cout << "Queue Overflow" << endl;
        }
        else if (isempty())
        {
            front = n;
            rear = n;
            count++;
        }
        else
        {
            rear->next = n;
            rear = n;
            count++;
        }
    }

    void popFront()
    {
        if (isempty())
        {
            cout << "Queue Underflow" << endl;
        }
        else if (front == rear)
        {
            front = rear = nullptr;
        }
        else
        {
            Node *tmp = front;
            front = front->next;
            delete tmp;
            count--;
        }
    }

    void display()
    {
        if (!isempty())
        {
            Node *tmp = front;
            while (tmp != nullptr)
            {
                cout << tmp->data << " ";
                tmp = tmp->next;
            }
            cout << "\n";
        }
    }

    void getsize()
    {
        cout << "Total nodes: " << count << endl;
    }
};

int main()
{
    Queue qu(5);
    qu.pushRear(1);
    qu.pushRear(2);
    qu.pushRear(3);
    qu.pushRear(4);
    qu.pushRear(5);
    qu.display();
    qu.getsize();
    qu.popFront();
    qu.display();
    // qu.pushRear(10);
    qu.getsize();
    qu.popFront();
    qu.display();
    qu.getsize();
    return 0;
}