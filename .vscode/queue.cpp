#include <iostream>
using namespace std ;
int queue[5],front =-1,rear=-1,n=5,x;

void insert()
{
    if(rear==n-1){
        cout<<"queue is full"<<endl;
        
    }
    else{
         if (front ==-1)
    {
        front=0;
    }
        cout<<"enter the no.";
        cin>>x;
        rear++;
        queue[rear]=x;
    }
}
    void display()
    {
        if (front ==-1)
        {
            cout<<"queue is empty";
        }

        for(int i=front;i<=rear;i++){
            cout<<"elements in the queues are :"<<endl;
            cout<<queue[i]<<endl;
        }
    }
    int peek()
    {
        if(front ==-1)
        {
            cout<<"queue is empty";
        }
        else{
              return queue[front];
        }
      
    }
    void dequeue()
    {
        if(front==-1)
       {
        cout<<"queue is empty";
       }
       else
       {
        cout<<"deleted element in the queue is:"<<queue[front]<<endl;
        if(front==rear)
        {
            front=-1;
            rear=-1;

        }
         else
         {
            front++;
         }
       }
        

    }
    int main()
    {
        insert();
        insert();
        insert();
        insert();
        insert();
        display();
        dequeue();
        dequeue();
        dequeue();
        display();
         int y=peek();
         cout<<"front value in queue is :"<<y<<endl;

    }
