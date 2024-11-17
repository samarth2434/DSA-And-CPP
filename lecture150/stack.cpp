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

    }

    int getTop() {

    }

    int getSize(){

    }

    bool isEmpty(){

    }
}; 