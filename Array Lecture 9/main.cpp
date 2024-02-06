#include<iostream>
using namespace std;

void printArray(int arr[], int size){

    cout << "Printing the array"<< endl ;
    //print the array
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
        }
    cout<< " Printing done "<< endl ;
}

int main(){

    //declare  ............
    // int num[15];

    // //accessing an array 
    // cout << "value at 14 index "<< num[14] << endl;

    // cout << endl << "Everythong is fine" << endl;

    //Initialising an array ............
    // int second[3] = {5,7,11};

    // //Accessing an element 
    // cout << "Value at 2 index " << second[2] << endl;

// Third array.........
    int third[15] = {2,7};
     
    int n = 15;
    // cout << "printing the array " << endl;

    // //Printing the array
    // for(int i=0; i<n; i++){
    //     cout<<third[i] << " ";
    // }

    // using function call

    printArray(third, 15);

    //fourth array.........Initialising all location with zero

    int fourth[10] = {0};
     n = 10;

    // cout << "printing the array " << endl;

    // //Printing the array
    // for(int i=0; i<n; i++){
    //     cout<<fourth[i] << " ";
    // }

    //using function call

    printArray(fourth, 10);

}