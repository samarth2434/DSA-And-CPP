#include<iostream>
#include<queue>  
using namespace std;

class CircularQueue{
    //create int arr
    int* arr;
    int currsize, cap;
    int f, r;

    //public property and create constructor 
    public:
    CircularQueue(int size){
        cap = size;
        arr = new int[cap];
        f=0, r=-1;
    }

    void push(int data){
        if(currsize == cap){
            cout<<"CQ is full\n";
            return;
        }
        //we have to update r
        r = (r+1) % cap;
        arr[r] = data;
        currsize++;
    }

    void pop(){
        if(empty()){
            cout<<"CQ is empty\n";
            return;
        }
        //update front 
        f = (f+1)%cap;
        currsize--;
    }

    int front(){
        if(empty()){
            cout<<"CQ is empty\n";
            return -1;
        }
       return arr[f];
    }

    bool empty(){
        return currsize == 0;
    }

    //arr me sare element ko print karwa dega 
    void printArr(){
        for(int i=0; i<cap; i++){
            cout<<arr[i] << " ";
        }
        cout<<endl;
    }
};

int main(){

    CircularQueue cq(3);

    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.pop();
    cq.push(4);

    cq.printArr();

    return 0;
}