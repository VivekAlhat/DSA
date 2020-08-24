#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int top;
    int arr[10];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 10; ++i)
        {
            arr[i] = 0;
        }
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
        if (top == 9)
        {
            return true;
        }
        return false;
    }

    void push(int data)
    {
        if (isfull())
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }

    int pop()
    {
        int val;
        if (isempty())
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            val = arr[top];
            arr[top] = 0;
            top--;
        }
        return val;
    }

    int getTop()
    {
        return arr[top];
    }

    int count()
    {
        return arr[top + 1];
    }

    void peek(int pos)
    {
        if (isempty())
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            if (pos < 0 || pos > 9)
            {
                cout << "Invalid Position" << endl;
            }
            else
            {
                cout << arr[pos] << " is present at " << pos << endl;
            }
        }
    }

    void update(int pos, int data)
    {
        if (isempty())
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            if (pos < 0 || pos > 9)
            {
                cout << "Invalid Position" << endl;
            }
            else
            {
                arr[pos] = data;
                cout << "Data Updated Successfully" << endl;
            }
        }
    }

    void display()
    {
        for (int i = 9; i >= 0; --i)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    Stack st;

    // Pushing data
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // Display Stack
    st.display();

    // Get top value
    cout << "Top is at: " << st.getTop() << endl;

    // Pop value
    cout << "After popping " << st.pop() << " stack is: " << endl;
    st.display();
    cout << "Top is at: " << st.getTop() << endl;
    return 0;
}