#include<iostream>
using namespace std;
class ST{
    public:
    string key[100];
    int value[100];
    int n;
    ST(){
        n = 0;
    }
    void put(string x, int y){
            int i=0;
            while(i<n){
                if(key[i]==x){
                    value[i] = y;
                    return;
                }
                i++;
            }
            key[i] = x;
            value[i] = y;
            n++;
        
    }
    int get(string x){
            int i=0;
            while(i<n){
                if(key[i]==x){
                    return value[i];
                }
                i++;
            }
            cout<<"not in table";
            return 0;
        
    }
    bool contains(string x){
            int i=0;
            while(i<n){
                if(key[i]==x){
                    return true;
                }
                i++;
            }
            return false;
        }
};
int main(){
ST a;
    a.put("A",1);
    a.put("N",2);
    a.put("H",6);
    cout<<a.get("A");
    a.put("A",7);
    cout<<a.get("A");
} 
