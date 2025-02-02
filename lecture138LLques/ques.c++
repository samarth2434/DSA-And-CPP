#include <iostream>
using namespace std;

// Node class definition
class Node {
public:
    int data;
    Node* next;

    // Parameterized constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to print linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to find the middle node of the linked list
Node* getMiddle(Node* head) {
    //LL is empty 
    if (head == NULL) {
        cout << "LL is empty" << endl;
        return NULL;
    }
    
    Node* slow = head;
    Node* fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}
//----function to find the length
int getLength(Node* head){
        int len = 0;
        Node* temp = head;
        while(temp != NULL){
            temp = temp -> next;
            len++;
        }
        return len;
}

//----------function reverse K nodes
Node* reverseKNodes(Node* &head, int k){
    //LL is empty 
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    int len = getLength(head);
    //k > len 
    if(k > len){
            cout<<"Enter the valid value for k"<<endl;
            return head;
    }
    //now we can reach here 
    //it means number of nodes in LL is >=k
    //stepA: reverse first K nodes of LL
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr -> next;
    int count =0;

    while(count < k){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    
    //step B: recursive call
    if(forward != NULL){
        //we still have nodes left to reverse 
        Node* recursionAns = reverseKNodes(forward, k);
        head->next = recursionAns;
    }
    //step c: return head of the modified LL
    return prev;
}

int main() {
    // Creating nodes
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    // Linking nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    // Print linked list
    print(head);

    //call 
    head = reverseKNodes(head, 2);
    print(head);

    // Get and print middle node
    // cout<<"Middle Node is: "<< getMiddle(head)->data<<endl;
    

    return 0;
}
