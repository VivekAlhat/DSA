#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int top, size;
    int arr[10] = {0};

public:
    Stack()
    {
        this->size = 10;
        top = -1;
    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }

    bool isfull()
    {
        if (top == size - 1)
        {
            return true;
        }
        return false;
    }

    void push(int data)
    {
        if (isfull())
        {
            cout << "Stack overflow\n";
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }

    int pop()
    {
        int x;
        if (isempty())
        {
            cout << "Stack Undeflow\n";
        }
        else
        {
            x = arr[top];
            arr[top] = 0;
            top--;
        }
        return x;
    }

    void display()
    {
        for (int i = 0; i < size; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

class Queue
{
public:
    Stack s1, s2;
    int cnt = 0;
    void enqueue(int data)
    {
        s1.push(data);
        cnt++;
    }

    void dequeue()
    {
        while (!s1.isempty())
        {
            int x = s1.pop();
            s2.push(x);
        }

        int y = s2.pop();

        while (!s2.isempty())
        {
            int x = s2.pop();
            s1.push(x);
        }
        cnt--;
    }

    void print()
    {
        s1.display();
    }

    void getCount()
    {
        cout << "Total Elements Of Queue: " << cnt << endl;
    }
};

int main()
{
    Queue qu;
    qu.enqueue(1);
    qu.enqueue(2);
    qu.enqueue(3);
    qu.enqueue(4);
    qu.enqueue(5);

    qu.print();
    qu.getCount();

    qu.dequeue();
    qu.dequeue();

    qu.print();
    qu.getCount();
    return 0;
}