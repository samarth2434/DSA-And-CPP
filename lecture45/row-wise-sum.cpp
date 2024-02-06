#include <iostream>
#include <limits.h>
using namespace std;

bool findkey(int arr[][3], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] == key)
            return true;
        }
    }

    //value is not present 
    return false;
}

void printRowWiseSum(int arr[][3], int rows, int cols){
// row sum --> Roe wise traversal 
cout<<"Printing row-wise sum"<<endl;
for(int i=0; i<rows; i++){
    int sum = 0;
    for(int j=0; j<cols; j++){
        sum = sum + arr[i][j];
    }
    cout<<sum<<endl;
}
}

int getMax(int arr[][3], int rows, int cols){
    int maxi = INT_MIN;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]>maxi){
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}

int main() {

   int arr [5][4];
   int rows = 5;
   int cols = 4;
    
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    
    for(int i=0; i< 5; i++){
        int sum=0;
        for(int j=0; j<4; j++){
            sum = sum + arr[i][j];
        }
        cout<< sum<<" ";
    }

    printRowWiseSum(arr, rows, cols);

    int key = 8;
    // cout<<findkey(arr,3,3,8);//////////
    if(findkey(arr,3,3,key)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    cout<<"Max Number:"<< getMax(arr, rows, cols);


    return 0;

   }