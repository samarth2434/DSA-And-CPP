#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int** arr = new int*[n];
    // using for loop to corrsponding each pointer to array
    for(int i=0; i<n; i++){
        arr[i] = new int[n];
    } 
    //creation done

//now take input
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
//now take output
cout<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j];
        } cout<<endl;
    }
    return 0;
}