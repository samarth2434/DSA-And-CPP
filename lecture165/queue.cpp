#include <iostream>
#include <queue>
using namespace std;

int main(){
    //creation 
    queue<int> q;

    //insertion
    q.push(5);
    q.push(10);
    q.push(25);
    q.push(55);

    //size 
    cout<<"Size of queue is: "<<q.size()<<endl;

    //removal
    q.pop(); 

    //pop karne ke baad what is the size
    cout<<"Size of queue is: "<<q.size()<<endl;

    //empty or not
    if(q.empty()){
        cout<<"Q is empty"<<endl;
    }
    else{
        cout<<"Q is not empty"<<endl;
    }

    //front element
    cout<<"Front element is: "<<q.front()<<endl;
}