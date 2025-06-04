#include<iostream>
using namespace std;

int main(){
    char str[10];

    cout<<"Enter the char array: ";
    // cin>>str;
    cin.getline(str, 10);

    //we have to cout each char 
    for(char ch : str){
        cout<< ch << endl;
    }

    cout<<"output: " << str << endl;
    return 0;
}