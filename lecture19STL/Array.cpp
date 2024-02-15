#include<iostream>
#include<array>  //we need to use this lib to create array

using namespace std;
int main(){

    // int basic[3] = {1,2,3};

    array<int,4> a = {1,2,3,4};   //to create array 

    int size = a.size();   //to find the size of array we use a.size

    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }

    cout<<"Element at 2nd Index-->"<<a.at(2)<<endl; //to find the element at particulat index we use a.at(Index number)

    cout<<"Empty or not-->"<<a.empty()<<endl;

    cout<<"First Element-->"<<a.front()<<endl; //TO find the first element of the array we use a.front()

    cout<<"Last Element-->"<<a.back()<<endl;  //TO find the last element of the array we use a.back()
}