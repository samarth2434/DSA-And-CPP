#include<iostream>
#include<vector>  //we need to use this lib to create vector

using namespace std;
int main(){

    vector<int> v; //we use this to create vector 

    vector<int> a(5,1);  //here 5 means size of the vector and 1 means all the element of the vector is initliase by value 5
     cout<<"print a"<<endl;
    for(int i:a) {
        cout<<i<<" ";
   }cout<<endl;

    cout<<"capacity-> "<<v.capacity()<<endl;  //to find the capacity of the vector or size of the vector 

    v.push_back(1);  // this is use to push the element in the vector 
    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(2);  // this is use to push the element in the vector 
    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(3);  // this is use to push the element in the vector 
    cout<<"capacity-> "<<v.capacity()<<endl;
    cout<<"size-> "<<v.size()<<endl;

    //in last case the capacity we push 3 but it will print 4 because it will be double of case 2 

    cout<<"Element at 2nd index "<<v.at(2)<<endl;

    cout<<"front-->"<<v.front()<<endl; //TO find the first element of the vector we use a.front()

    cout<<"back-->"<<v.back()<<endl;  //TO find the last element of the vector we use a.back()

    cout<<"before pop"<<endl;   //before pop and after pop
    for(int i:v) {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v) {
        cout<<i<<" ";
   }cout<<endl;

   cout<<"before clear size "<<v.size()<<endl; //before and after clear 
   v.clear();

   cout<<"after clear size "<<v.size()<<endl;


}