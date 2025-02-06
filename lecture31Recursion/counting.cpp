#include <iostream>
using namespace std;

//-----function 
void print(int n){
    //base case 
    if(n==0){
        return;
    }

    //cout
    cout<< n << endl;

    //recursive relation 
    print(n-1);
    cout<< n << endl; 
}

int mian(){

    int n;
    cin>>n;
    cout<<endl;
    
    //call the function print 
    print(n);

    return 0;
}