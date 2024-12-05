#include <iostream>
using namespace std;
int stack[5], n = 5, top = -1; /*REMEMBER always check all condition before applying operations
                                 condition such as push
                                 agar push kar rahe ho to check karo wheater stack is full or not
                                 agar pop() kar rahe ho to check karo ki stack is empty or not
                                 always use if else conditions before applying these operations*/
void push(int x)
{
    if (top == n - 1)
    {
        cout << "stack is full";
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "stack is empty " << endl;
    }
    else
    {
        cout << "pop element is :" << stack[top] << endl;
        top--;
    }
}
int peek()
{
    return stack[top];
}
void display()
{
    if (top >= 0)
    {
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << endl;
        }
    }
    else
    {
        cout << "stack is empty" << endl;
    }
}
int main()
{
    push(12);
    push(23);
    push(5);
    push(56);
    push(34);
    display();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    int y = peek();
    cout << "top element of the stack is :" << y;
}