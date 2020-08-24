#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int front, rear, size;
    int arr[5] = {0};

public:
    Queue()
    {
        front = rear = -1;
        size = 5;
    }

    bool isempty()
    {
        if (front == -1)
        {
            return true;
        }
        return false;
    }

    bool isfull()
    {
        if (rear == size - 1)
        {
            return true;
        }
        return false;
    }

    void enqueue(int data)
    {
        if (isfull())
        {
            cout << "Overflow\n";
        }
        else if (isempty())
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = data;
    }

    int dequeue()
    {
        int tmp;
        if (isempty())
        {
            cout << "Undeflow\n";
        }
        else
        {
            tmp = arr[front];
            front--;
        }
        return tmp;
    }

    void display()
    {
        if (isempty())
        {
            cout << "No Data\n";
        }
        else
        {
            for (int i = 0; i < 5; ++i)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

class Stack
{
public:
    Queue q1, q2;
    int cnt = 0;
    void print()
    {
        q1.display();
    }

    void push(int data)
    {
        while (!q1.isempty())
        {
            int x = q1.dequeue();
            q2.enqueue(x);
        }

        q1.enqueue(data);

        while (!q2.isempty())
        {
            int x = q2.dequeue();
            q1.enqueue(x);
        }
        cnt++;
    }

    int pop()
    {
        return q1.dequeue();
        cnt--;
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.print();
    return 0;
}