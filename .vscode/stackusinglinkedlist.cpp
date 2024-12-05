#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *top = null;
void push(int x)
{
    node *newnode = new node();
    newnode->data = x;
    newnode->next = top;
    top = newnode;
    cout << "pushed stack is :" << x << endl;
}
void pop()
{
    if (top == null)
    {
        cout << "stack is empty ";
    }
    else   
    {
        node *temp = top;
        cout << "element pop is : " << node->data << endl;
        node *top = top->next;
        delete temp;
    }
    void display()
    {
        if (top == null)
        {
            cout << "stack is empty ";
            return;
        }
        cout << "stack elements are :" << endl;
        node *top = temp;
        while (top != null)
        {

            cout << temp->data << endl;
            temp = temp->next;
        }
    }
    int main()
    {
        push(56);
        push(47);
        push(67);
        dispaly();
        pop();
        pop();
        pop();
        display();
    }
}