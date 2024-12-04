#include <iostream>
#include <queue>
#include <stack>
using namespace std;

//method 1 
void reverseQueue(queue<int> &q){
    stack<int> s;

    //step 1: put all element of q into s
    while(!q.empty()){
        int element = q.front();
        q.pop();

        s.push(element);
    }

    //step 2: put all the element from s into q 
    while(!s.empty()){
        int element = s.top();
        s.pop();

        q.push(element);
    }

}

//method 2 
void reverseQueueRecursion(queue<int> & q){
    //base class 
    if(q.empty())
    return;

    //step A
    int temp = q.front();
    q.pop();

    //step B - recursive call
    reverseQueueRecursion(q);

    //step c - again push 
    q.push(temp);

}

//question -2 reverse first k element 

void reversek(queue<int> &q, int k){
    //step 1: queue -> k element push into stack  
    stack<int> s;
    int count =0;
    int n = q.size();   // n is size of the queue
    if(k <= 0|| k>n)
    return ;

    while(!q.empty()){
        int temp = q.front();
        q.pop();
        s.push(temp); 
        count++;

        if(count == k)
        break;
    }

    //step 2 - in stack pop element and push into the queue
    while(!s.empty()){
        int temp = s.top();
        s.pop();
        q.push(temp);
    }
    
    // step 3 - pop n-k from the queue and then push it into queue wapas 
    count = 0;
    while(!q.empty() && n-k != 0){
        int temp = q.front();
        q.pop();
        q.push(temp); 
        count++;

        if(count == n-k)
        break;
}
}


int main(){
    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    
    //method 1 
    // reverseQueue(q);
    //method 2
    reverseQueueRecursion(q);

    // quesion 2 
    reversek(q,3);
    
    cout<<"Printing Queue"<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

}