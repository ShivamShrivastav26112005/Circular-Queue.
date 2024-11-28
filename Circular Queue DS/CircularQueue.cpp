// Circular Queue -> 

#include<iostream>
#include<array>
using namespace std;
class Queue
{
    public:
    int f;
    int b;
    int s; // size
    int arr[4];
    Queue()
    {
        f=0;
        b=0;
        s=0;
    }
void push(int val)
{
    if(b==5)
    {
        cout<<"Queue is full "<<endl;
        return ;
    }
        arr[b]=val;
        b++;
        s++;
}

void pop()
{
    if(s==0)
    {
        cout<<"Queue is empty"<<endl;
        return ;
    }
    f++;
    s--;
}

int front()
{
    if(s==0)
    {
        cout<<"Queue is empty "<<endl;
        return -1;
    }
    return arr[f];
}

int back()
{
    if(s==0)
     {
         cout<<"Queue is empty "<<endl;
        return -1;
    }
    return arr[b-1];
}

int size()
{
    return s;
}

bool empty()
{
    if(s==0) return true;
    else return false;
}

void display()
{
    for(int i=f; i<b; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

};

int main()
{
        Queue q;
        q.push(10);
        q.push(20);
        q.push(30);
        q.push(40);
        cout<<q.size()<<endl;
        q.display();
        cout<<q.size()<<endl;
        q.push(50);
        cout<<q.size()<<endl;
        q.push(60);
        q.display();
        q.pop();
        q.display();
        cout<<q.size()<<endl;
}


// 4
// 10 20 30 40
// 4
// 5
// Queue is full
// 10 20 30 40 50 
// 20 30 40 50
// 4


