#include<iostream>
using namespace std;

//create the function 
bool binarySearch(int arr[], int s, int e, int k){

    //base case 
    //1) element not found
    if(s>e)
    return false;

    //calculate the mid 
    int mid = s + (e-s)/2;

    //2) element found , the ask key is present at the mid element 
    if(arr[mid] == k)
    return true;
    
    //right wale part ke liye 
    if(arr[mid] < k){
        return binarySearch(arr, mid+1, e, k);

    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}

int main(){

    int arr[6] = {2,4,6,10,14,18};
    int size = 6;
    int key = 18;

    cout<<"Present or not "<<binarySearch(arr,0,5,key)<<endl; 

    return 0;
}