#include <iostream>
using namespace std;

//create a doubly Linked list 
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data = 0;
        this-> prev = NULL;
        this-> next = NULL;
    }
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        cout<<"Node with value: "<< this -> data<<" deleted "<<endl;
    }
};

//printing function for print the LL
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

//Now we have to find the len 
//length function 
int getLength(Node* head){
    int len = 0;
    Node* temp = head; //good pratice 

    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

//Insert at head 
void insertAtHead(Node* &head, Node* &tail, int data){
    //if LL is empty 
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    else{
        //LL is non empty 
        //step1: create a new node 
        Node* newNode = new Node(data);
        //step2: 
        newNode -> next = head;
        //step3: 
        head -> prev = newNode;
        //step4: update head 
        head = newNode;

    }
}

//InsertAtTail
void insertAtTail(Node* &head, Node* &tail, int data){

    //if LL is empty 
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        //LL is not empty 
        //step1: create a new node 
        Node* newNode = new Node(data);
        //step2:
        tail -> next = newNode;
        //step3:
        newNode -> prev = tail;
        //step4: update tail 
        tail = newNode;

    }
}

//insert at position 
void insertAtPosition(Node* &head, Node* &tail, int data, int position){
    //If LL is empty 
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    //if LL is nonempty 
    else{
        if(position == 1){
            insertAtHead(head, tail, data);
            return;
        }
        //findlen 
        int len = getLength(head);
        if(position > len){
            insertAtTail(head, tail, data);
            return;
        }  
        //insertion in middle 
        //step1: find the prev and curr
        int i = 1;
        Node* prevNode = head;
        while(i < position - 1){
            prevNode = prevNode -> next;
            i++;
        }
        Node* curr = prevNode -> next;

        //step2: create a newNode
        Node* newNode = new Node(data);

        //step3:
        prevNode -> next = newNode;
        newNode -> prev = prevNode;

        //step4:
        curr -> prev = newNode;
        newNode -> next = curr;

    }

}

//----------Deletion 
void deleteFromPos(Node* &head, Node* &tail, int position){
    if(head == NULL){
        cout<<"LL is empty";
        return;
    }
    if(head -> next == NULL){
        //if single Node present so how we can delete?
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    int len = getLength(head);
    if(position > len){
        cout<<"please enter the valid len"<<endl;
        return;
    }

    if(position == 1){
        //want to delete the first node 
        //step1:create temp
        Node* temp = head;
        //step2: update head to the next node 
        head = head -> next; 
        //step3: break the link between temp and head
        head -> prev = NULL;
        temp -> next = NULL;
        //step4:delete the temp node because vo alag ho gaya hai 
        delete temp;
        return;
    }
    //find the length 
    //last node check karlo
    if(position == len){
        // delete last node (we have to delete last node)
         //step1: create a temp
         Node* temp = tail;
         //step2: tail update 
         tail = tail->prev;
         //step3: we have to break the link 
         temp -> prev = NULL;
         tail -> next = NULL;
         //step5:delete temp
         delete temp;
         return;

         // delete from the middle pos of the LL
         //step1: find left, right, curr
         int i=1;
         Node* left = head;
         while(i < position - 1){
            left = left -> next;
            i++;
         }
         Node* curr = left -> next;
         Node* right = curr -> next;

         //step2:
         left -> next = right;
         //step3: 
         right -> prev = left;
         //step4: break the link
         curr -> prev = NULL;
         curr -> next = NULL;

         //step5: delete curr
         delete curr;

}
}


int main(){

    //travesal 
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* head = first;
    Node* tail = third; 
    
    //doubly LL travel
    first -> next = second;
    second -> prev = first;

    second -> next = third;
    third -> prev = second;

    //call the function print 
    // print(first);
    // cout<<endl;
    
    //insert at head 
    insertAtHead(head, tail, 101);

    //cout<<endl;
    // print(head);

    // cout<<endl;

    //insert at tail 
    insertAtTail(head, tail, 501);

    // cout<<endl;
    // print(head);

    // cout<<endl;

    //insert at position 
    insertAtPosition(head, tail, 401, 3);

    cout<<endl;
    print(head);
    cout<<endl;

    deleteFromPos(head,tail,3);
    
    cout<<endl;
    print(head);
    cout<<endl;


    return 0;
}