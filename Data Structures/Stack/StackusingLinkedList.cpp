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

class StackUsingLL
{
private:
    Node *top = nullptr;

public:
    bool isempty()
    {
        if (top == nullptr)
        {
            return true;
        }
        return false;
    }

    void push(int data)
    {
        Node *n = new Node(data);
        if (isempty())
        {
            top = n;
        }
        else
        {
            n->next = top;
            top = n;
        }
    }

    void pop()
    {
        if (!isempty())
        {
            int tmpdata = top->data;
            Node *tmp = top;
            top = top->next;
            delete tmp;
            cout << tmpdata << " removed from the stack\n";
        }
        else
        {
            cout << "Stack underflow\n";
        }
    }

    void peek()
    {
        cout << "Top: " << top->data << endl;
    }

    void display()
    {
        Node *tmp = top;
        while (tmp != nullptr)
        {
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }
};

int main()
{
    StackUsingLL st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.display();
    st.peek();
    st.pop();
    st.display();
    st.peek();
    return 0;
}