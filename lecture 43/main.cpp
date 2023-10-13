#include <iostream>
#include <vector>
using namespace std;

int main(){

    //create vector
    vector<int> arr;

    // int ans = (sizeof(arr)/sizeof(int));
    // cout<<ans<<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    //insert 
    arr.push_back(5);
    arr.push_back(6);
    
    //print
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    //remove //delete
    arr.pop_back();

    //print 
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<< " ";
    }
    cout<< endl;
    
    //size and capacity 
    // vector<int> brr(10);
    // cout<<"Size of b "  << brr.size()<<endl;
    // cout<<"Capacity of b " << brr.capacity()<<endl;

    // for(int i=0; i<brr.size(); i++){
    //     cout<<brr[i]<< " ";
    // }
    // cout<< endl;

    // return 0;


    //taking input 
    int n;
    cout<<"Enter the value of n"<<endl;

    cin>>n;

    vector<int> brr(n,1234);
    cout<<"Size of b "  << brr.size()<<endl;
    cout<<"Capacity of b " << brr.capacity()<<endl;

    for(int i=0; i<brr.size(); i++){
        cout<<brr[i]<< " ";
    }
    cout<< endl;



}