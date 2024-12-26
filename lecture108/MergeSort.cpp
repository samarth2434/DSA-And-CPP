#include <iostream>
using namespace std;

//write the function that is merge the two sorted array 
void merge(int* arr, int s, int e){

    //find mid
    int mid = (s+e)/2;  

    int len1 = mid -s +1;
    int len2 = e-mid;

    //dynamic create arr len1 and len2
    int* left = new int[len1];
    int* right = new int[len2]; 

    //copy values 
    int k = s; // arr ka starting index s hai 
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }

    k = mid+1; // arr ka starting index mid + 1
    for(int i=0; i<len2; i++){
        right[i] = arr[k];
        k++;
    }

    //merge logic 
}

//using recursion call
int mergeSort(int* arr, int s, int e){
    //base case
    //if single element is present so element is sorted we have to do nothing 
    //s == e--> for single element start and end index equal hoga 
    // s > e --> array invalid 
    if(s>=e)
    return;
    //find the mid 
    int mid = (s+e)/2;
    // now array is break into two part 
    // left part sort kardo recursion bhaiya 
    mergeSort(arr, s, mid);

    //Right part sort kardo recursion bhaiya 
    mergeSort(arr, mid+1, e);

    //now merge two sorted array 
    merge(arr, s, e);
}

int main(){
    int arr[] = {4,5,13,2,12};
    int n = 5;

    int s = 0;
    int e = n-1;
    mergeSort(arr, s,e);

    return 0;
}