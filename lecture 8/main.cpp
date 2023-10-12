#include <iostream>
using namespace std;

int main(){
    //array declare

    // int arr[7];
    // cout<<arr<<endl;     //Array ka base address 
    // cout<<"Array declare successfully"<<endl;

    //Array initisation 
    // int arr[]={2,4,6,8,10};
    // cout<<"Array initisation successfully"<<endl;

    // printing the value //CODE

    // int arr[]={1,3,5,7,9};

    // //printing the values
    // for(int index=0; index<5; index++){
    //     cout<<arr[index]<<" ";
    // }
    

    //CODE
    // int arr[10];   //static array


    // cout<<"Enter the input values in array"<<endl;
    // //Taking input in array
    // for(int i=0; i<10; i++){
    //     cin>>arr[i];
    // }

    //printing 
    // cout<<"Printing the values in array"<<endl;
    // for(int i=0; i<10; i++){
    //     cout<<arr[i]<<" ";
    // }

    // return 0; 

    //take input and give output double 
    //CODE

    // int arr[500];

    // int n;
    // cout<<"How many number you want to add in array"<<endl;

    // cin>>n;

    // cout<<"Enter the number "<<endl;
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

    // //print doubles in output
    // cout<<"DOUBLES: ";
    // for(int i=0; i<n; i++){
    //     cout<<2*arr[i]<<" ";
    // }

    //arr[5]={1,3,5,7,9} to arr[]={1,1,1,1,1}
    //CODE

    int arr[5]={1,3,5,7,9};

    for(int i=0; i<5; i++){
        arr[i]=1;
    }

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    // return 0;


    


}