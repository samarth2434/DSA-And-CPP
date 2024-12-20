#include <iostream>
using namespace std;

class stack {
    public:

    int *arr;
    int top;
    int size;

    stack(int size){
        arr = new int[size];
        this-> size = size;
        top = -1;
    }

    //functions

    void push(int data){
            if(size - top > 1){
                //space avaiable
                //insert
                top++;
                arr[top] = data;
            }
            else{
                //space not available 
                cout<< "stack Overflow"<<endl; 
            }
    }

    void pop(){
        if(top==-1){
            //stack is empty
            cout<<"Stack underflow, cant delete element" << endl;
        }
        else{
            //stack is not empty
            top--;  
        }

    }

    int getTop() {
        if(top==-1){
            cout<<"There is not element in stack" << endl;
        }
        else{
            return arr[top];
        }

    }
    // return no of valid element present in stack
    int getSize(){
        return top + 1; 
        
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }

    }
}; 

int main(){
    //creation 
    stack s(10);

    //insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.isEmpty()){
        cout<<s.getTop() << " ";
        s.pop();
    }
    return 0;
}