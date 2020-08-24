#include <iostream>
using namespace std;

class Queue
{
private:
    int front, rear, size, cnt;
    int *arr;

public:
    Queue(int size)
    {
        front = rear = -1;
        cnt = 0;
        this->size = size;
        arr = new int[size];
    }

    bool isempty()
    {
        if (cnt == 0 && front == -1 && rear == -1)
        {
            return true;
        }
        return false;
    }

    bool isfull()
    {
        if (cnt == size || front == 0 && rear == size - 1)
        {
            return true;
        }
        return false;
    }

    void enque(int data)
    {
        if (isfull())
        {
            cout << "Queue Overflow" << endl;
        }
        else if (isempty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % size;
        }
        arr[rear] = data;
        cnt++;
    }

    void deque()
    {
        if (isempty())
        {
            cout << "Queue Underflow" << endl;
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
        cnt--;
    }

    void peek()
    {
        cout << arr[front] << " is the front element" << endl;
        cout << arr[rear] << " is the rear element" << endl;
    }

    void getSize()
    {
        cout << "Total elements in queue are: " << cnt << endl;
        cout << "Capacity of queue is: " << size << endl;
    }

    void print()
    {
        for (int i = front; i <= rear; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue que(5);
    que.enque(1);
    que.peek();
    que.enque(2);
    que.peek();
    que.enque(3);
    que.peek();
    que.enque(4);
    que.peek();
    que.enque(5);
    que.peek();
    que.getSize();

    cout << endl;
    que.print();

    que.deque();
    que.deque();
    que.peek();
    que.getSize();

    cout << endl;
    que.print();
    return 0;
}