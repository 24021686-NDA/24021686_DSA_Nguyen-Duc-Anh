#include<iostream>
using namespace std;
struct Stack{
    int a[100];
    int n=0;
void push(int item){
    a[n]=item;
    n++;
}
int pop(){
    n--;
    return a[n];
}


void empty(){
    if(n==0){
        cout<<"empty";
    }else{
        cout<<"not empty";
    }
}
};
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
    s.empty();
    return 0;
}
