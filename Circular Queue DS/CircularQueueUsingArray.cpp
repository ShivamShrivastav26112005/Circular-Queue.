// Implementation of the Circular Queue using (array).

// Queue - > Follow principle FIFO, in queue ele. is added(push) from the back of the queue
// and deleted(pop) from the front of the queue

#include<iostream>
using namespace std;
class CircularQueue
{
    public:
    int arr[10];
    int size=sizeof(arr)/sizeof(arr[0]);
    int f;
    int b;

    CircularQueue()
    {
        f=0;
        b=0;
        size=0;
    }


void push(int val)
{
    arr[b]=val;
    b++;
    size++;
}


void pop()
{
    if(size==0)
    {
        cout<<"Array / Circular Queue is empty ! Underflow ";
        return ;
    }
    else
    {
        f++;
        size--;
    }
}


int front()
{
    if(size==0)
    {
        cout<<"List is empty ! Underflow "<<endl;
        return -1;
    }
    else
    {
        return arr[f];
    }
}

int back()
{
    if(size==0)
    {
        cout<<"List is empty ! Underflow "<<endl;
        return -1 ;
    }
    else
    {
        return arr[b-1];
    }
}

int empty()
{
    if(size==0)
    {
        cout<<"Yes, Circular Queue is empty !"<<endl;
        return true;
    }
    else
    {
        cout<<"No, List is not empty ! "<<endl;
        return false;
    }
}


void display()
{
    if(size==0)
    {
        cout<<"List is empty "<<endl;
        return ;
    }
    for(int i=f; i<b; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


};
int main()
{
    CircularQueue cq;
    cq.push(10);
    cq.push(20);
    cq.push(30);
    cq.push(40);
    cq.push(50);
    cq.display();


    cq.pop();
    cq.pop();
    cq.display();


    cout<<cq.front()<<endl;
    cout<<cq.back()<<endl;

    cq.push(300);
    cq.display();

    cq.push(400);
    cq.display();

    cq.push(500);
    cq.display();

    cout<<cq.front()<<endl;
    cout<<cq.back()<<endl;

    cout<<cq.size<<endl;
    cout<<cq.empty();

}

// // output -:
// 10 20 30 40 50 
// 30 40 50
// 30
// 50
// 30 40 50 300
// 30 40 50 300 400
// 30 40 50 300 400 500
// 30
// 500
// 6
// No, List is not empty !
// 0


// Done ->  15-02-2024, 06:25PM