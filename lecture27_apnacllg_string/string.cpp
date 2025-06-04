#include<iostream>
#include<string>
using namespace std;

int main(){
    // string str = "apna cllg"; //dynamic in nature ==> runtime pe resize ho jti hai
    // cout<< str <<endl;

    // str = "samarth";
    // cout<< str <<endl;
    // cout<<str.length()<<endl;

    string str = "samarth kuki.";

    //1) method 1 to print 
    for(int i=0; i<str.length(); i++){
        cout<< str[i] << endl;
    }

    //method 2 to print 
    for(char ch : str){
        cout<< ch << endl;
    }
    cout<<endl;

    return 0;
}