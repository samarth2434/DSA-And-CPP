#include<iostream>
using namespace std;

int main(){

    int num = 5;

    cout << num << endl;

    //address of operator - &

    cout<<"address of num is : "<< &num <<endl;

    int *ptr = &num;

    cout<<"Address is : " << ptr << endl;
    cout<<"value is : " << *ptr << endl;

    cout<<"size of integer is : " << sizeof(num) << endl;
    cout<<"size of pointer is : " << sizeof(ptr) << endl;

    return 0;
}