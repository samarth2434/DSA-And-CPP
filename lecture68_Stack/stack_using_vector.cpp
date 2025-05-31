#include<iostream>
#include<vector>
using namespace std;

//create a stack class
class stack{
    //create vector 
    vector<int> v;

    //stack ko implement karne ke liye 3 function ko implemnent karna padhta hai 
    public:

    void push(int val){
        v.push_back(val);
    }

    void pop(){
        v.pop_back();
    }

    int top(){
        return v[v.size()-1];

    }

    bool empty(){ 
        return v.size() == 0;
    }
    

};

int main(){

    //main function me stack ko use karne ke liye stack create karege
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