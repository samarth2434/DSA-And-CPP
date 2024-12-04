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

//question 3 - interleavequeue 
void interleaveQueue(queue<int> &q){
    //step 1
    int n = q.size();
    int k = n/2;
    int count = 0;
    queue<int> q2;

    while(!q.empty()){
        int temp = q.front();
        q.pop();
        q2.push(temp);
        count++;

        if(count == k)
        break;
    }

    // step 2 
    while(!q.empty() && !q2.empty()){
        int first = q2.front();
        q2.pop();

        q.push(first);

        int second = q.front();
        q.pop();

        q.push(second);
    }
    //odd wala case
    if(n&1){
        int element = q.front();
        q.pop();
        q.push(element);
    }
}


int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(6);
    q.push(7);
    q.push(8);
    // q.push(9);

    
    //method 1 
    // reverseQueue(q);
    //method 2
    // reverseQueueRecursion(q);

    // quesion 2 
    // reversek(q,3);

    //question 3
    interleaveQueue(q);
    
    cout<<"Printing Queue"<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

}