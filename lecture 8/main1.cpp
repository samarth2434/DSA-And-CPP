#include <iostream>
using namespace std;

void printArray(int arr[], int size){   //Array and function 
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void inc(int arr[], int size){
    arr[0]=arr[0]+10;

    printArray(arr, size);
}

//function call of linear search 
bool find(int arr[],int size,int key){

    //linear search 
    for(int i=0; i<size; i++){
        if(arr[i] == key)
        return true;
    }
    //not found 
    return false;
}

int main(){

    //count 0 and 1 IN ARRAY

    // int arr[] = {0,1,1,1,0,0,0,0,1,0,1,0,1,0,1};
    // int size=15;

    // int numZero=0;
    // int numOne=0;

    // for(int i=0; i<size; i++){
    //     //if zero found , increment numZero
    //     if(arr[i]==0){
    //         numZero++;
    //     }
    //     //if one found , increment numOne
    //     if(arr[i]==1){
    //         numOne++;
    //     }
    // }

    // cout<<"number of zeroes "<<numZero<<endl;
    // cout<<"number of Ones "<<numOne<<endl;


    //ARRAY and Function 
    // int arr[]={5,6};
    // int size=2;
    // inc(arr, size);

    // printArray(arr,size);


    //LINEAR SEARCH 
    // int arr[5]={1,3,5,7,8};
    // int size=5;

    // cout<<"Enter the key to find "<<endl;
    // int key;
    // cin>>key;

    // if(find(arr,size,key)){
    //     cout<<"Found"<<endl;
    // }
    // else{
    //     cout<<"not Found"<<endl;
    // }

    //Maximum no PRSENET in array
    // int arr[]={2,3,4,5,4,33,4,3,44,54,33};
    // int size=11;
    // //initialse the maxi variable with the
    // //minimum possible integer value
    // int maxi = INT8_MIN;

    // for(int i=0; i<size; i++){
    //     if(arr[i]>maxi){
    //         //found a number greater than maxi, update maxi
    //         maxi=arr[i];

    //     }
    // }
    // cout<<"maximum number is "<<maxi<<endl;


    //EXTREME PRINT IN ARRAY
    // int arr[8]={10,20,30,40,50,60,70,80};
    // int size=8;

    // int start = 0;
    // int end = size-1;

    // while(true){
    //     if(start>end)
    //     break;

    //     cout<< arr[start] <<" ";
    //     cout<< arr[end] <<" ";
    //     start++;
    //     end--;
    // }

    // return 0;


    //REVERSE AN ARRAY

    int arr[8]={10,20,30,40,50,60,70,80};
    int size = 8;

    int start = 0;
    int end = size-1;

    while(start<=end){

        //step1:
        swap(arr[start], arr[end]);
        //step2:
        start++;
        //step3:
        end--;
    }

    //printing the array
    for(int i=0; i<size; i++){
        cout<<arr[i]<< " ";
    }



    }