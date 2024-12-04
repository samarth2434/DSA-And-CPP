#include <iostream>
#include <deque>
using namespace std;

class Deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size){
        this-> size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    //push Rear function
    void pushRear(int data){
     if((front == 0 && rear == size-1)){
            cout<<"Q is full, cannot insert"<<endl;
            return;
        }
        else if(front == -1){
            front = rear = 0;
            arr[rear] == data;
        }
        else if(rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = data;
        }
        else{
            rear++;
            arr[rear] = data;
        }
    }

    // push front function
    void pushFront(int data){
         if((front == 0 && rear == size-1)){
            cout<<"Q is full, cannot insert"<<endl;
            return;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if(front == 0 && rear != size-1){
            front = size-1;
        }
        else{
            front--;
        }
        arr[front] = data;
    }

    //pop front function

    void popFront(){
         if(front == -1){
            cout<<"Q is empty, cannot pop"<<endl;
            return;
        }
        else if(front == rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if(front == size-1){
            arr[front] = -1; 
            front =0;
        }
        else{
            arr[front] = -1;
            front ++;
        }
        
    }

    //pop rear function
    void popRear(){
          if(front == -1){
            cout<<"Q is empty, cannot pop"<<endl;
            return;
        }
        else if(front == rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if(rear == 0){
            arr[rear] = -1;
            rear = size-1;
        }
        else{
            arr[rear] = -1;
            rear--; 
        }
       
    }

    //printing function 
    void print(){
        for(int i=0; i<size; i++){
            cout<< arr[i] <<" ";
        }
        cout<<endl;   
    }

};



int main(){

    //create deque 
    Deque dq(10);
    // dq.print();

    dq.pushRear(10);
    dq.pushRear(20);
    dq.pushRear(30);
    dq.pushRear(40);
    dq.pushRear(50);
    dq.pushRear(60);
    dq.pushRear(70);
    dq.pushRear(80);

    dq.print();

    dq.popRear();
    dq.print();

return 0;
}
