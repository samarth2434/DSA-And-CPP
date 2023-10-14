#include <iostream>
#include <vector>
using namespace std;

int main(){

    // vector<int> arr{10,20,40,60,70};

    // //print all pairs 
    // //outer loop will tranverse for each element 
    // for(int i=0; i<arr.size(); i++){
    //     cout<<"We are at element "<<arr[i];
    //     int element = arr[i];

    //     //for every element will traverse on aage wale element 
    //     for(int j=i+1; j<arr.size(); j++){
    //         cout<<"pair"<<element<<"with"<<arr[j]<<endl; 
    //         // cout<< "(" << element <<","<< arr[j] <<")" <<endl;
    //     }
    // }

    //TRIPLET

    vector<int> arr{10,20,30,40};
    int sum = 80;

    for(int i=0; i<arr.size(); i++){
        int element1= arr[i];

        for(int j=i+1; j<arr.size(); j++){
            int element2 = arr[j];

            for(int k=j+1; k<arr.size(); k++){
                int element3 = arr[k];
            

            if( element1 + element2 + element3 == sum) {
                cout<<element1<<","<< element2<<","<<element3<<endl;
            }

        }
    }

    //for 4 no 4 loop chalege i=0  j=i+1  k=j+1  p=k+1
} 

}