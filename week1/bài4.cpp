#include <iostream>
using namespace std;
int ucln(int a,int b);
void rutgon(int &a,int &b);
int main() 
{
    int a;
    int b;
    cout<<"Nhập A"<<endl;
    cin>>a;
    cout<<"Nhập B"<<endl;
    cin>>b;
    if(b==0){
        cout<<"Nhập B khác 0"<<endl;
        return 0;
    }
    rutgon(a,b);
    if(b<0){
        a=-a;
        b=-b;
    }
    cout<<a<<"/"<<b;
    return 0;
}
int ucln(int a,int b){
    while(b!=0){
        int t=a%b;
        a=b;
        b=t;
    }
    return a;
}
void rutgon(int &a,int &b){
     int r=ucln(a,b);
    a=a/r;
    b=b/r;
}
//Độ phức tạp thời gian O(logn)
//Độ phức tạp bộ nhớ O(1)
