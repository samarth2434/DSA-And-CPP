#include<iostream>
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i<n; i++){
        //for round 1 to n-1
        bool swapped = false;

        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            //already sorted 
            break;
        }
    }
}
    int main(){

        int arr[5]= {2,5,1,6,9};
        bubbleSort(arr,5);

    }

