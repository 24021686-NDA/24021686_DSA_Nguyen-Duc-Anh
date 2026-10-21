#include<iostream>
using namespace std;

struct Queue{
    int a[100];
    int front = 0;
    int rear = 0;

    void enqueue(int item){
        a[rear] = item;
        rear++;
    }

    int dequeue(){
        int item = a[front];
        front++;
        return item;
    }

    void empty(){
        if(front == rear){
            cout<<"empty";
        }else{
            cout<<"not empty";
        }
    }
};

int main(){
    Queue a;
    a.enqueue(1);
    a.enqueue(2);
    a.enqueue(3);

    cout<<a.dequeue()<<endl;
    cout<<a.dequeue()<<endl;
    cout<<a.dequeue()<<endl;

    a.empty();
    return 0;
}
