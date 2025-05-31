#include<iostream>
#include<vector>
#include<list>
using namespace std;

//create a stack class
class stack{
    //create LL
    list<int> ll;

    //stack ko implement karne ke liye 3 function ko implemnent karna padhta hai 
    public:

    void push(int val){
        ll.push_front(val);  
    }

    void pop(){
        ll.pop_front();
    }

    int top(){
        return ll.front();

    }

    bool empty(){
        return ll.size() == 0;
    }
    

};

int main(){
stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()){
        cout<<s.top()<< " ";
        s.pop();
    }
    cout<<endl;
    return 0;
}