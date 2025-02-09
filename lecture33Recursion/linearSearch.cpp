#include<iostream>
using namespace std;

//create the function print 
void print(int arr[], int n){
    cout<<"Size of array is "<< n <<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//create the function
bool linearSearch(int arr[], int size, int k){
    //print the arr
    print(arr,size);
    //base case - if arr is empty means we find but the element is not present in the arr
    if(size == 0)
        return false;

    //Ek case solve kar leta hu baki recursion sambhal lega 
    if(arr[0] == k){
        return true;
    }
    //agar nahi hai toh remainig part me check karlo 
    else{
        bool remainingPart = linearSearch(arr+1, size-1, k);
        return remainingPart;
    }
    
}

int main(){

    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 3;
    
    //call or pass the function
    bool ans = linearSearch(arr, size, key);

    //print 
    if(ans){
        cout<<"Present "<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }

    return 0;

}