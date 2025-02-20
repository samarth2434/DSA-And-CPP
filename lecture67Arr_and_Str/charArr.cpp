#include<iostream> 
using namespace std;

//Find the len function 
int getLength(char name[]){
    int length = 0;
    int i =0;

    while(name[i] != '\0'){
        length++;
        i++;

    }
    return length;
}

//Reverse string function 
int reverseCharArray(char name[]){
    int i = 0;
    int n = getLength(name);
    int j = n-1;

    while(i<=j){  //i>j - we have to stop
        swap(name[i], name[j]);
        i++;
        j--;

    }
}

int main(){

    // char ch[100];
    // cout<<"Enter your name: "<<endl;

    // cin>>ch;

    // cout<<"Apka naam: "<< ch <<" bolo "<<endl;
    
    //---------------------------------
    // char name[100];

    // cin>>name;
    
    //iss index pe ye wala char padha hua hai
    // for(int i=0; i<7; i++){
    //     cout<<"index: "<< i << " value: "<< name[i] << endl;
    // }
    // int value = (int)name[6];
    // cout<< "value is : " << value << endl;
   
    //-----------------------------------
    // char arr[100];
    // cin>>arr;
    //we have to read full name so we can use the getline function 
    // getline(cin, arr);

    // cin.getline(arr, 50);
    // cout<<arr;

    //------------find the length call 
    char name[100];
    cin >> name;

    cout<<"Length is: " << getLength(name) << endl;

    //reverse fun call
    cout<<"Initially: "<< name << endl;
    reverseCharArray(name);
    cout<<"After reversal process: "<< name << endl; 

    return 0;
}