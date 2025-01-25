#include <iostream>
using namespace std;

//create a node 
class Node{
    public:
    int data;
    Node* next;

    //by default value in the node
    Node(){
        this->data = 0;
        this->next = NULL;
    }
    //not by default  
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

//print function to run the Linked list 
void print(Node* & head){

    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";  //print data
        temp = temp->next;      //pointer point to next 
    }
}

int main(){
    //create a new node 
    // Node* head = new Node();
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    first->next = second;  //first point to the second 
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    cout<<"Printing the LL"<< endl;
    print(first);


}